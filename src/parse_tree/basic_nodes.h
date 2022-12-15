#ifndef __BASIC_NODES_H_
#define __BASIC_NODES_H_

#include <iostream>
#include <string>
#include <vector>

#include "../utils/consts.h"
#include "../utils/utils.h"


//
// Protótipos
//
struct ScopeContext;
struct GenerationContext;

struct Node;
struct StatementNode;
struct DeclarationNode;
struct VarDeclarationNode;
struct FunctionNode;
struct ExpressionNode;
struct IdentifierNode;
struct TypeNode;

typedef vector<Node*> NodeList;
typedef vector<StatementNode*> StmtList;
typedef vector<VarDeclarationNode*> VarList;
typedef vector<ExpressionNode*> ExprList;


/**
 *A classe base de todos os nós na árvore de análise.
 */
struct Node {
    Location loc;

    Node() {}

    Node(const Location& loc) {
        this->loc = loc;
    }

    virtual ~Node() {}

    virtual bool analyze(ScopeContext* context) {
        return true;
    }

    virtual string generateQuad(GenerationContext* context) {
        return "";
    }

    virtual string toString() {
        return "";
    }
};

/**
 * A classe base de todos os nós de instrução na árvore de análise.
 */
struct StatementNode : public Node {

    StatementNode() {}

    StatementNode(const Location& loc) : Node(loc) {}

    virtual string toString(int ind = 0) {
        return string(ind, ' ') + ";" ;
    }
};

/**
 *  A classe base de todos os nós de instrução de declaração na árvore de análise.
 */
struct DeclarationNode : public StatementNode {
    TypeNode* type;
    IdentifierNode* ident;

    //
    // NOTA: as seguintes variáveis ​​serão calculadas depois de chamar a função de análise
    //
    string alias;                       // alias para evitar o mesmo identificador em escopos diferentes

    int used = 0;                       // O número de vezes que este nó de declaração foi lido

    bool initialized = false;           // Se este nó de declaração foi inicializado ou não

    DeclarationNode(const Location& loc) : StatementNode(loc) {}

    virtual string declaredHeader() = 0;

    virtual string declaredType() = 0;
};

/**
 * A classe base de todos os nós de expressão na árvore de análise.
 */
struct ExpressionNode : public StatementNode {
    //
    // NOTA: as seguintes variáveis ​​serão calculadas depois de chamar a função de análise
    //
    DataType type = DTYPE_ERROR;        // Tipo de dados da expressão
    DeclarationNode* reference = NULL;  // A variável de referência da expressão existe
    bool constant = false;              // Se a expressão é de valor constante ou não

    bool used = false;                  // Se o valor da expressão deve ser usado ou não

    ExpressionNode() {}

    ExpressionNode(const Location& loc) : StatementNode(loc) {}

    virtual int getConstIntValue() {
        return -1;
    }
    
    virtual bool analyze(ScopeContext* context) {
        return analyze(context, false);
    }

    virtual bool analyze(ScopeContext* context, bool valueUsed) {
        used = valueUsed;
        return true;
    }

    virtual string exprTypeStr() {
        return reference ? reference->declaredType() : Utils::dtypeToStr(type);
    }
};

/**
 * A classe de nó que contém um tipo de dado na árvore de análise.
 */
struct TypeNode : public Node {
    DataType type;

    TypeNode(const Location& loc, DataType type) : Node(loc) {
        this->type = type;
    }

    virtual string toString(int ind = 0) {
        return string(ind, ' ') + Utils::dtypeToStr(type);
    }
};

/**
 * A classe de nó que representa uma instrução de erro de sintaxe.
 */
struct ErrorNode : public StatementNode {
    string what;

    ErrorNode(const Location& loc, const string& what) : StatementNode(loc) {
        this->what = what;
        this->loc.pos -= this->loc.len - 1;
    }

    virtual bool analyze(ScopeContext* context);

    virtual string toString(int ind) {
        return string(ind, ' ') + ">> ERROR" ;
    }
};

#endif