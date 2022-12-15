#include <iostream>
#include <string>
#include <string.h>
//local libs
#include "context/generation_context.h"
#include "context/scope_context.h"
#include "utils/consts.h"
#include "utils/utils.h"
#include "parse_tree/parse_tree.h"

using namespace std;

//Definição do Compilador
#define LANG_NAME   "EZL"
#define VERSION     "2.0"
#define RELEASE_DATE "15 de dezembro de 2022"

//Funções e variáveis externas
extern int yyparse();
extern FILE* yyin;
extern StatementNode* programRoot;

//Variáveis Globais
string inputFilename;
string outputFilename = "out.o";
string symbolTableFilename;
bool warn = false;

//Protótipos de funções
void writeToFile(string data, string filename);
void printHelp();
void printVersion();
void parseArguments(int argc,char* argv []);

/**
 *  Programa Principal
 *  @param argc o número de argumentos enviados ao programa.
 *  @param argv os argumentos enviados
*/
int main(int argc, char* argv[]){
    parseArguments(argc, argv);

    ScopeContext scopeContext(inputFilename, warn);
    GenerationContext genContext;

    yyin = fopen(inputFilename.c_str(), "r");
        if(yyin == NULL){
            fprintf(stderr,"[ERROR]: Could not open the input file '%s'\n",inputFilename.c_str());
            exit(0);
        }
    yyparse();

    if(programRoot != NULL && programRoot->analyze(&scopeContext)){
        writeToFile(programRoot->generateQuad(&genContext), outputFilename);
        writeToFile(scopeContext.getSymbolTableStr(), symbolTableFilename);
    }else{
        writeToFile("",outputFilename);
    }
    fclose(yyin);
    if(programRoot != NULL){
        delete programRoot;
    }
    return 0;
}

/**
 * Cria um novo arquivo e grava os dados fornecidos nele.
 *  @param data os dados a serem gravados
 *  @param filename o nome do arquivo que armazena os dados.
*/
void writeToFile(string data, string filename){
    if(filename.empty()){
        return;
    }
    ofstream fout(filename);
    if(!fout.is_open()){
        fprintf(stderr,"[ERROR]: Could not write in file '%s'\n",filename.c_str());
        return;
    }
    fout << data << endl;
    fout.close();
}

/**
 * Imprime o menu de ajuda do compilador 
 * no fluxp de output padrão e encerra o programa
*/
void printHelp(){
    printf("%s version %s, %s\n\n",LANG_NAME,VERSION,RELEASE_DATE);
    printf("[Usage]: %s [switches] <code_filename>\n",LANG_NAME);
    printf("\t\t\t-h, --help                   Print the help menu and exit.\n");
    printf("\t\t\t-v, --version                Print the installed version and exit.\n");
    printf("\t\t\t-o, --output <filename>      Specify the output filename.\n");
    printf("\t\t\t-s, --sym_table <filename>   Output the symbol table to the given file.\n");
    printf("\t\t\t-w, --warn                   Show warning messages.\n");
    exit(0);
}

/**
 * Imprime a versão do compílador no
 * fluxo de output padrão e encerra o programa
*/
void printVersion(){
    printf("%s version %s, %s\n\nCopyright (c) 2022 the-ezlang",LANG_NAME,VERSION,RELEASE_DATE);
    exit(0);
}

/**
 * Analisa os argumentos recebidos e atualiza as variáveis globais
 * @param argc o número de argumentos enviados
 * @param argv os argumentos enviados
*/
void parseArguments(int argc, char* argv[]){
    while(++argv, --argv){
        if(**argv == '-'){
            if(strcmp(*argv, "-h")==0 || strcmp(*argv, "--help")==0){
                printHelp();
            }
            else if(strcmp(*argv, "-v")==0 || strcmp(*argv, "--version")==0){
                printVersion();
            }
            else if(strcmp(*argv, "-o")==0 || strcmp(*argv, "--output")==0){
                if(--argc < 1){
                    fprintf(stderr, "[ERROR]: Missing output filename\n\n");
                    printHelp();
                }
                outputFilename = string(*(++argv));
            } 
            else if(strcmp(*argv, "-s")==0 || strcmp(*argv, "--sym_table")==0){
                if(--argc < 1){
                    fprintf(stderr, "[ERROR]: Missing output filename\n\n");
                    printHelp();
                }
                symbolTableFilename = string(*(++argv));
            } 
            else if(strcmp(*argv, "-w")==0 || strcmp(*argv, "--warn")==0){
              warn = true;
            }
            else{
                fprintf(stderr, "Unknown Argument '%s'\n", *argv);
            }
        }
        else if(inputFilename.empty()){
            inputFilename = string(*argv);
        }else{
          fprintf(stderr, "WARNING: Too many arguments, '%s' ignored\n",*argv);  
        }
    }
    if(inputFilename.empty()){
        fprintf(stderr,"[ERROR]: Missing input filename argument\n\n");
        printHelp();
    }
}