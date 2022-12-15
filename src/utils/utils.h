#ifndef __UTILS_H_
#define __UTILS_H_

#include <string>
#include <vector>
#include <unordered_map>

//local lib
#include "consts.h"

using namespace std;

/**
 * União de diferentes tipos de dados primitivos.
 */
union Value{
    bool boolVal;
    char charVal;
    int intVal;
    float floatVal;
};

/**
 * Estrutura contendo as informações de localização dos tokens.
 */
struct Location {
    int lineNum;
    int pos;
    int len;
};

/**
 * Estrutura contendo as informações básicas dos tokens.
 */
struct Token {
    char* value;
    Location loc;
};

/**
 * Coleção de funções utilitárias a serem usadas em todos os módulos do projeto.
 *
 * Observe que todos os métodos nesta classe devem ser métodos estáticos.
 */
struct Utils {

    /**
     * Converte as tabulações na string fornecida em espaços.
     * 
     *      @param str é a string a ser convertida.
     *      @return a string depois de substituir tabulações por espaços.
     */
    static string replaceTabsWithSpaces(const string& str) {
        string ret;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '\t') {
                ret += "    ";
            } else {
                ret += str[i];
            }
        }
        return ret;
    }

    /**
     * Verifica se o operador fornecido é um operador aritmético ou não.
     *
     * @param opr o operador para verificar.
     *
     * @return {@code true} se o operador fornecido for aritmético; {@code false} caso contrário
     */
    static bool isArithmeticOpr(Operator opr) {
        switch (opr) {
            case OPR_ADD:
            case OPR_U_PLUS:
            case OPR_SUB:
            case OPR_U_MINUS:
            case OPR_MUL:
            case OPR_DIV:
            case OPR_MOD:
                return true;
        }
        return false;
    }

    /**
     * Verifica se o operador fornecido é um operador lógico ou não.
     *
     * @param opr o operador para verificar.
     *
     * @return {@code true} se o operador fornecido for lógico; {@code false} caso contrário.
     */
    static bool isLogicalOpr(Operator opr) {
        switch (opr) {
            case OPR_LOGICAL_AND:
            case OPR_LOGICAL_OR:
            case OPR_LOGICAL_NOT:
            case OPR_GREATER:
            case OPR_GREATER_EQUAL:
            case OPR_LESS:
            case OPR_LESS_EQUAL:
            case OPR_EQUAL:
            case OPR_NOT_EQUAL:
                return true;
        }
        return false;
    }

    /**
     * Verifica se o operador fornecido é um operador bit a bit ou não.
     *
     * @param opr o operador para verificar.
     *
     * @return {@code true} se o operador fornecido for bit a bit; {@code false} caso contrário.
     */
    static bool isBitwiseOpr(Operator opr) {
        switch (opr) {
            case OPR_AND:
            case OPR_OR:
            case OPR_XOR:
            case OPR_NOT:
            case OPR_SHL:
            case OPR_SHR:
                return true;
        }
        return false;
    }

    /**
     * Verifica se o operador fornecido requer o operando de valor l ou não.
     *
     * @param opr o operador para verificar.
     *
     * @return {@code true} se o operador fornecido exigir o operando valor l(l-value); {@code false} caso contrário.
     */
    static bool isLvalueOpr(Operator opr) {
        switch (opr) {
            case OPR_ASSIGN:
            case OPR_PRE_INC:
            case OPR_PRE_DEC:
            case OPR_SUF_INC:
            case OPR_SUF_DEC:
                return true;
        }
        return false;
    }

    /**
     * Converte o operador fornecido em sua string de token correspondente.
     *
     *  @param opr o operador a ser convertido.
     *
     *  @return a string de token correspondente.
     */
    static string oprToStr(Operator opr) {
        switch (opr) {
            case OPR_ASSIGN:
                return "=";
            case OPR_ADD:
            case OPR_U_PLUS:
                return "+";
            case OPR_SUB:
            case OPR_U_MINUS:
                return "-";
            case OPR_MUL:
                return "*";
            case OPR_DIV:
                return "/";
            case OPR_MOD:
                return "%";
            case OPR_PRE_INC:
            case OPR_SUF_INC:
                return "++";
            case OPR_PRE_DEC:
            case OPR_SUF_DEC:
                return "--";
            case OPR_AND:
                return "&";
            case OPR_OR:
                return "|";
            case OPR_XOR:
                return "^";
            case OPR_NOT:
                return "~";
            case OPR_SHL:
                return "<<";
            case OPR_SHR:
                return ">>";
            case OPR_LOGICAL_AND:
                return "&&";
            case OPR_LOGICAL_OR:
                return "||";
            case OPR_LOGICAL_NOT:
                return "!";
            case OPR_GREATER:
                return ">";
            case OPR_GREATER_EQUAL:
                return ">=";
            case OPR_LESS:
                return "<";
            case OPR_LESS_EQUAL:
                return "<=";
            case OPR_EQUAL:
                return "==";
            case OPR_NOT_EQUAL:
                return "!=";
        }

        return "#";
    }

    /**
     * Converte o operador fornecido em sua string quádrupla correspondente.
     *
     *  @param opr o operador a ser convertido.
     *  @param type o tipo da operação resultante.
     *
     *  @return a string quádrupla correspondente.
     */
    static string oprToQuad(Operator opr, DataType type = DTYPE_UNKNOWN) {
		switch (opr) {
            case OPR_ADD:
                return "ADD_" + dtypeToQuad(type);
            case OPR_SUB:
				return "SUB_" + dtypeToQuad(type);
            case OPR_MUL:
                return "MUL_" + dtypeToQuad(type);
            case OPR_DIV:
                return "DIV_" + dtypeToQuad(type);
            case OPR_MOD:
                return "MOD_" + dtypeToQuad(type);
            case OPR_AND:
			case OPR_LOGICAL_AND:
                return "AND_" + dtypeToQuad(type);
            case OPR_OR:
			case OPR_LOGICAL_OR:
                return "OR_" + dtypeToQuad(type);
            case OPR_XOR:
                return "XOR_" + dtypeToQuad(type);
            case OPR_NOT:
			case OPR_LOGICAL_NOT:
                return "NOT_" + dtypeToQuad(type);
            case OPR_SHL:
                return "SHL_" + dtypeToQuad(type);
            case OPR_SHR:
                return "SHR_" + dtypeToQuad(type);
            case OPR_GREATER:
                return "GT_" + dtypeToQuad(type);
            case OPR_GREATER_EQUAL:
                return "GTE_" + dtypeToQuad(type);
            case OPR_LESS:
                return "LT_" + dtypeToQuad(type);
            case OPR_LESS_EQUAL:
                return "LTE_" + dtypeToQuad(type);
            case OPR_EQUAL:
                return "EQU_" + dtypeToQuad(type);
            case OPR_NOT_EQUAL:
                return "NEQ_" + dtypeToQuad(type);
			case OPR_U_MINUS:
                return "NEG_" + dtypeToQuad(type);
			case OPR_PRE_INC:
            case OPR_SUF_INC:
                return "INC_" + dtypeToQuad(type);
            case OPR_PRE_DEC:
            case OPR_SUF_DEC:
                return "DEC_" + dtypeToQuad(type);
			case OPR_PUSH:
				return "PUSH_" + dtypeToQuad(type);
			case OPR_POP:
				return "POP_" + dtypeToQuad(type);
			case OPR_JMP:
				return "JMP";
            case OPR_JNZ:
				return "JNZ_" + dtypeToQuad(type);
			case OPR_JZ:
				return "JZ_" + dtypeToQuad(type);
        }

        return "#";
    }

    /**
     * Verifica se o tipo fornecido é um tipo de dados inteiro.
     *
     * @param digite o tipo a ser verificado.
     *
     * @return {@code true} se o tipo fornecido for inteiro; {@code false} caso contrário.
     */
    static bool isIntegerType(DataType type) {
        return (type == DTYPE_BOOL || type == DTYPE_CHAR || type == DTYPE_INT);
    }

    /**
     * Converts the given data type into its corresponding token string.
     *
     * @param type the type to convert.
     *
     * @return the corresponding token string.
     */
    static string dtypeToStr(DataType type) {
        switch (type) {
            case DTYPE_VOID:
                return "void";
            case DTYPE_BOOL:
                return "bool";
            case DTYPE_CHAR:
                return "char";
            case DTYPE_INT:
                return "int";
            case DTYPE_FLOAT:
                return "float";
            case DTYPE_FUNC_PTR:
                return "pointer to function";
            case DTYPE_ERROR:
                return "type error";
        }

        return "unknown";
    }

    /**
     * Converts the given data type into its corresponding quadruple string.
     *
     * @param type the type to convert.
     *
     * @return the corresponding quadruple string.
     */
    static string dtypeToQuad(DataType type) {
        switch (type) {
            case DTYPE_VOID:
                return "VOID";
            case DTYPE_BOOL:
                return "BOOL";
            case DTYPE_CHAR:
                return "CHR";
            case DTYPE_INT:
                return "INT";
            case DTYPE_FLOAT:
                return "FLOAT";
            case DTYPE_FUNC_PTR:
                return "FNCPTR";
            case DTYPE_ERROR:
                return "TYPERR";
        }

        return "unknown";
    }

    /**
     * Convert data type from t1 into t2.
     *
     * @param t1 the type to convert from.
     * @param t2 the type to convert to.
     *
     * @return the corresponding quadruple string.
     */
    static string dtypeConvQuad(DataType t1, DataType t2) {
        return (t1 != t2 ? dtypeToQuad(t1) + "_TO_" + dtypeToQuad(t2) + "\n" : "");
    }
};

#endif