#ifndef __CONTEXT_H_
#define __CONTEXT_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <unordered_map>

#include "../parse_tree/parse_tree.h"

#include "../utils/utils.h"
#include "../utils/consts.h"

using namespace std;


/**
 * Tipo da tabela de símbolos.
 */
typedef unordered_map<string, DeclarationNode*> SymbolTable;

/**
 * Estrutura contendo informações de escopo.
 */
struct Scope {
    ScopeType type;         // O tipo de escopo
    Node* ptr;              // Um ponteiro para o nó do escopo
    SymbolTable table;      // A tabela de símbolos deste escopo

    Scope(ScopeType type, Node* ptr = NULL) {
        this->type = type;
        this->ptr = ptr;
    }
};

/**
 * Classe que contém o contexto atual na fase de análise semântica.
 */
class ScopeContext {
private:
    //
    // Variáveis ​​de membros privados
    //
    string sourceFilename;
    vector<string> sourceCode;
    vector<Scope*> scopes;
    unordered_map<string, int> aliases;
    vector<pair<int, DeclarationNode*>> symbols;   
    bool warn;

public:
    //
    //  Variáveis de membros públicos
    //
    bool declareFuncParams = false;
    bool initializeVar = false;

public:

    /**
     *  Constrói um novo objeto de contexto
     *
     *  @param sourceFilename o nome do arquivo do código-fonte a ser compilado.
     *  @param warn se deve mostrar mensagens de aviso ou não.
     */
    ScopeContext(const string& sourceFilename, bool warn = false) {
        this->sourceFilename = sourceFilename;
        this->readSourceCode();
        this->warn = warn;
    }

    /**
     * Adiciona um novo escopo a este contexto.
     *
     * @param type o tipo de escopo a ser adicionado.
     * @param ptr um ponteiro para o nó do escopo na árvore de análise.
     */
    void addScope(ScopeType type, Node* ptr = NULL) {
        scopes.push_back(new Scope(type, ptr));
    }

    /**
     *  Remove o último escopo adicionado deste contexto.
     */
    void popScope() {
        Scope* scope = scopes.back();
        scopes.pop_back();

        for (auto& it : scope->table) {
            DeclarationNode* sym = it.second;

            if (sym->used <= 0) {
                if (dynamic_cast<VarDeclarationNode*>(sym)) {
                    log("the value of variable '" + sym->declaredHeader() + "' is never used", sym->ident->loc, LOG_WARNING);
                }
                else if (sym->ident->name != "main") {
                    log("function '" + sym->declaredHeader() + "' is never called", sym->ident->loc, LOG_WARNING);
                }
            }
            
            aliases[sym->ident->name]--;
        }

        delete scope;
    }

    /**
     *  Verifica se o escopo atual é o escopo global dentro deste contexto ou não.
     *
     * @return {@code true} se o escopo atual for o escopo global; {@code false} caso contrário.
     */
    bool isGlobalScope() {
        return scopes.size() == 1;
    }

    /**
     * Pesquisa o escopo de função mais interno.
     *
     * @return um ponteiro no escopo da função encontrada ou {@code NULL} se não estiver disponível.
     */
    FunctionNode* getFunctionScope() {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->type == SCOPE_FUNCTION) {
                return (FunctionNode*) scopes[i]->ptr;
            }
        }

        return NULL;
    }

    /**
     * Procura o escopo do switch mais interno.
     *
     * @return um ponteiro no escopo do switch encontrado ou {@code NULL} se não estiver disponível.
     */
    SwitchNode* getSwitchScope() {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->type == SCOPE_SWITCH) {
                return (SwitchNode*) scopes[i]->ptr;
            }
        }

        return NULL;
    }

    /**
     * Declara um novo símbolo no último escopo adicionado neste contexto.
     *
     * @param sym o símbolo a ser adicionado na tabela de símbolos.
     *
     * @return {@code true} se o símbolo foi declarado com sucesso; {@code false} se já declarado.
     */
    bool declareSymbol(DeclarationNode* sym) {
        SymbolTable& table = scopes.back()->table;

        if (table.count(sym->ident->name)) {
            return false;
        }

        // Adiciona símbolo para impressão posterior
        symbols.push_back({ scopes.size() - 1, sym });

        //Forma um novo nome alternativo para o identificador
        int num = aliases[sym->ident->name]++;

        if (num > 0) {
            sym->alias = sym->ident->name + "@" + to_string(num);
        } else {
            sym->alias = sym->ident->name;
        }

        table[sym->ident->name] = sym;
        return true;
    }

    /**
     * Pesquisa o identificador fornecido na tabela de símbolos.
     *
     *  @param identificador o nome do símbolo a ser pesquisado.
     *  @return um ponteiro na entrada da tabela de símbolos encontrada ou {@code NULL} se não estiver disponível.
     *  
     */
    DeclarationNode* getSymbol(const string& identifier) {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->table.count(identifier)) {
                return scopes[i]->table[identifier];
            }
        }

        return NULL;
    }

    /**
     * Verifica se este contexto tem um escopo que pode aceitar
     * declaração break ou não. Ou seja, um escopo de loop ou escopo de switch.
     *
     * @return {@code true} se este contexto tiver um escopo de interrupção, {@code false} caso contrário.
     */
    bool hasBreakScope() {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->type == SCOPE_LOOP || scopes[i]->type == SCOPE_SWITCH) {
                return true;
            }
        }

        return false;
    }

    /**
     * Verifica se este contexto tem um escopo que pode aceitar
     * declaração de caso ou não. Ou seja, um escopo de switch.
     *
     * @return {@code true} se este contexto tiver um escopo de alternância, {@code false} caso contrário.
     */
    bool hasSwitchScope() {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->type == SCOPE_SWITCH) {
                return true;
            }
        }

        return false;
    }

    /**
     * Verifica se este contexto tem um escopo que pode aceitar
     * continuar declaração ou não. Ou seja, um escopo de loop.
     *
     * @return {@code true} se este contexto tiver um escopo contínuo, {@code false} caso contrário.
     */
    bool hasLoopScope() {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->type == SCOPE_LOOP) {
                return true;
            }
        }

        return false;
    }

    /**
     * Verifica se este contexto tem um escopo que pode aceitar
     * declaração de retorno ou não. Ou seja, um escopo de função.
     *
     * @return {@code true} se este contexto tiver um escopo contínuo, {@code false} caso contrário.
     */
    bool hasFunctionScope() {
        for (int i = (int) scopes.size() - 1; i >= 0; --i) {
            if (scopes[i]->type == SCOPE_FUNCTION) {
                return true;
            }
        }

        return false;
    }

    /**
     * Registra a mensagem fornecida no local especificado neste contexto.
     *
     * @param what a mensagem a ser registrada.
     * @param loc a localização do token para apontar neste contexto.
     * @param level o nível de log desta mensagem.
     */
    void log(const string& what, const Location& loc, LogLevel level) {
        string logLvl;

        switch (level) {
            case LOG_ERROR:
                logLvl = "error";
                break;
            case LOG_WARNING:
                if (!warn) {
                    return;
                }
                logLvl = "warning";
                break;
            case LOG_NOTE:
                logLvl = "note";
                break;
        }

        fprintf(stdout, "%s:%d:%d: %s: %s\n", sourceFilename.c_str(), loc.lineNum, loc.pos, logLvl.c_str(), what.c_str());
        fprintf(stdout, "%s\n", sourceCode[loc.lineNum - 1].c_str());
        fprintf(stdout, "%*s", loc.pos, "^");

        if (loc.len > 1) {
            fprintf(stdout, "%s", string(loc.len - 1, '~').c_str());
        }

        fprintf(stdout, "\n");
    }

    /**
     * Retorna a tabela de símbolos como uma string para visualização.
     *
     * @return uma string representando a tabela de símbolos.
     */
    string getSymbolTableStr() {
        stringstream ss;

        ss << "+-------+---------------------------------------------------+---------------------+---------------------+-------+\n";
        ss << "| scope | type                                              | identifier          | alias               | used  |\n";
        ss << "+-------+---------------------------------------------------+---------------------+---------------------+-------+\n";

        for (int i = 0; i < symbols.size(); ++i) {
            int scope = symbols[i].first;
            DeclarationNode* sym = symbols[i].second;

            ss << "| " << left << setw(6) << scope;
            ss << "| " << left << setw(50) << sym->declaredType();
            ss << "| " << left << setw(20) << sym->ident->name;
            ss << "| " << left << setw(20) << sym->alias;
            ss << "| " << left << setw(6) << sym->used << "|\n";
            ss << "+-------+---------------------------------------------------+---------------------+---------------------+-------+\n";
        }

        return ss.str();
    }

private:

    /**
     * Lê o arquivo de código-fonte fornecido e preenche
     * o vetor global {@code sourceCode}.
     */
    void readSourceCode() {
        ifstream fin(sourceFilename);
        if (!fin.is_open()) {
            return;
        }
        string line;
        while (getline(fin, line)) {
            sourceCode.push_back(Utils::replaceTabsWithSpaces(line));
        }
        fin.close();
    }
};

#endif