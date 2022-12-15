#ifndef __CONSTS__H_
#define __CONSTS__H_

/*
[Enum contendo todos os operadores possíveis da linguagem]
*/
enum Operator{
OPR_ASSIGN = 100,       // a = b
    OPR_ADD,                // a + b
    OPR_U_PLUS,             // +54
    OPR_SUB,                // a - b
    OPR_U_MINUS,            // -54
    OPR_MUL,                // a * b
    OPR_DIV,                // a / b
    OPR_MOD,                // a % b
    OPR_PRE_INC,            // ++a
    OPR_SUF_INC,            // a++
    OPR_PRE_DEC,            // --a
    OPR_SUF_DEC,            // a--
    OPR_AND,                // a & b
    OPR_OR,                 // a | b
    OPR_XOR,                // a ^ b
    OPR_NOT,                // ~a
    OPR_SHL,                // a << 1
    OPR_SHR,                // a >> 1
    OPR_LOGICAL_AND,        // a && b
    OPR_LOGICAL_OR,         // a || b
    OPR_LOGICAL_NOT,        // !a
    OPR_GREATER,            // a > b
    OPR_GREATER_EQUAL,      // a >= b
    OPR_LESS,               // a < b
    OPR_LESS_EQUAL,         // a <= b
    OPR_EQUAL,              // a == b
    OPR_NOT_EQUAL,          // a != b

    //
    // instruções
    //
	OPR_PUSH,				// PUSH X, empurra para a pilha
	OPR_POP, 				// POP A, pop último elemento da pilha
	OPR_JMP,				// JMP L1, salto incondicional
    OPR_JNZ,                // JNZ L, jmp se o topo da pilha não for zero.
	OPR_JZ, 				// JZ L1, jmp se o topo da pilha for zero
};

/**
 * Enum contendo todos os tipos de dados possíveis da linguagem.
 * 
 * Observe que a ordem importa.
 * NÃO ALTERE A ORDEM ENUM.
 */

enum DataType{
    DTYPE_VOID = 300,
    DTYPE_BOOL,
    DTYPE_CHAR,
    DTYPE_INT,
    DTYPE_FLOAT,
    DTYPE_FUNC_PTR,
    DTYPE_ERROR,
    DTYPE_UNKNOWN
};


/**
 * Enum contendo diferentes tipos de escopo.
 */

enum ScopeType{
    SCOPE_BLOCK = 500,
    SCOPE_FUNCTION,
    SCOPE_LOOP,
    SCOPE_IF,
    SCOPE_SWITCH,
};


/**
 * Enum contendo diferentes níveis de registro.
 */
enum LogLevel{
    LOG_ERROR,
    LOG_WARNING,
    LOG_NOTE
};

#endif