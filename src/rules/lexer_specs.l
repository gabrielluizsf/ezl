%{
#include <vector>
#include <string>

#include "../parse_tree/parse_tree.h"
#include "parser.hpp"

using namespace std;

#define ADVANCE_CURSOR      (curLoc.pos += yyleng)

//
// Protótipos de Funções
//
void saveLocation();
void saveToken();

//
// Variáveis Globais
//
Location curLoc = {1,0,0};
%}

%{
// =====================================================================================================
// ||  Inicia os Estados                                                                              ||             
// =====================================================================================================
%}

%s BLOCK_COMMENT

%{
// =====================================================================================================
// Definições de padrão (substituições)
// =====================================================================================================
%}

DIGIT               [0-9]
INTEGER             [0-9]+
FLOAT               (([0-9]*\.[0-9]+)|([0-9]+\.[0-9]*))
EXP                 ([eE][-+]?{INTEGER})
REAL                ({INTEGER}{EXP}|{FLOAT}{EXP}?)
LETTER              [a-zA-Z_]
IDENTIFIER          {LETTER}({LETTER}|{DIGIT})*
LINE_COMMENT        "//"(.)*

%%

%{
// =====================================================================================================
// Seção de regras
// =====================================================================================================
%}

%{
// localização de token
%}
\n                                  curLoc.lineNum; curLoc.pos = 0;
\r                                  ;
\t                                  curLoc.pos += 4;
" "                                 curLoc.pos++;

%{
// Tipos de dados
%}
<INITIAL>"int"                      saveLocation(); return TYPE_INT;
<INITIAL>"float"                    saveLocation(); return TYPE_FLOAT;
<INITIAL>"char"                     saveLocation(); return TYPE_CHAR;
<INITIAL>"bool"                     saveLocation(); return TYPE_BOOL;
<INITIAL>"void"                     saveLocation(); return TYPE_VOID;

%{
// Ramo de Tokens
%}
<INITIAL>"const"                    saveLocation(); return CONST;
<INITIAL>"if"                       saveLocation(); return IF;
<INITIAL>"else"                     saveLocation(); return ELSE;
<INITIAL>"switch"                   saveLocation(); return SWITCH;
<INITIAL>"case"                     saveLocation(); return CASE;
<INITIAL>"default"                  saveLocation(); return DEFAULT;
<INITIAL>"for"                      saveLocation(); return FOR;
<INITIAL>"do"                       saveLocation(); return DO;
<INITIAL>"while"                    saveLocation(); return WHILE;
<INITIAL>"break"                    saveLocation(); return BREAK;
<INITIAL>"continue"                 saveLocation(); return CONTINUE;
<INITIAL>"return"                   saveLocation(); return RETURN;

%{
// Operadores
%}
<INITIAL>"++"                       saveLocation(); return INC;
<INITIAL>"--"                       saveLocation(); return DEC;
<INITIAL>"=="                       saveLocation(); return EQUAL;
<INITIAL>"!="                       saveLocation(); return NOT_EQUAL;
<INITIAL>">="                       saveLocation(); return GREATER_EQUAL;
<INITIAL>"<="                       saveLocation(); return LESS_EQUAL;
<INITIAL>"<<"                       saveLocation(); return SHL;
<INITIAL>">>"                       saveLocation(); return SHR;
<INITIAL>"&&"                       saveLocation(); return LOGICAL_AND;
<INITIAL>"||"                       saveLocation(); return LOGICAL_OR;
<INITIAL>[-+*/%&|^~!<>=(){}[\],:;]  saveLocation(); return yytext[0];


%{
// Valores
%}
<INITIAL>{INTEGER}                  saveToken(); return INTEGER;
<INITIAL>{REAL}                     saveToken(); return FLOAT;
<INITIAL>(\'.\')                    saveToken(); return CHAR;
<INITIAL>"true"                     saveToken(); return BOOL;
<INITIAL>"false"                    saveToken(); return BOOL;
<INITIAL>{IDENTIFIER}               saveToken(); return IDENTIFIER;

%{
// Outros
%}
<INITIAL>{LINE_COMMENT}             ADVANCE_CURSOR; // Ignore comments
<INITIAL>"/*"                       ADVANCE_CURSOR; BEGIN BLOCK_COMMENT;
<BLOCK_COMMENT>"*/"                 ADVANCE_CURSOR; BEGIN INITIAL;
<BLOCK_COMMENT>.                    ADVANCE_CURSOR; // Ignore block comments

<INITIAL>.                          saveLocation(); return yytext[0];

%%

// =====================================================================================================
// Seção de sub-rotinas do usuário
// =====================================================================================================

void saveLocation() {
    curLoc.len = yyleng;

    yylval.location = curLoc;
    yylval.location.pos++;

    ADVANCE_CURSOR;
}

void saveToken() {
    curLoc.len = yyleng;

    yylval.token.value = strdup(yytext);
    yylval.token.loc = curLoc;
    yylval.token.loc.pos++;

    ADVANCE_CURSOR;
}

int yywrap() {
    return 1;
}