/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_RULES_PARSER_HPP_INCLUDED
# define YY_YY_SRC_RULES_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TYPE_INT = 258,                /* TYPE_INT  */
    TYPE_FLOAT = 259,              /* TYPE_FLOAT  */
    TYPE_CHAR = 260,               /* TYPE_CHAR  */
    TYPE_BOOL = 261,               /* TYPE_BOOL  */
    TYPE_VOID = 262,               /* TYPE_VOID  */
    CONST = 263,                   /* CONST  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    SWITCH = 266,                  /* SWITCH  */
    CASE = 267,                    /* CASE  */
    DEFAULT = 268,                 /* DEFAULT  */
    FOR = 269,                     /* FOR  */
    DO = 270,                      /* DO  */
    WHILE = 271,                   /* WHILE  */
    BREAK = 272,                   /* BREAK  */
    CONTINUE = 273,                /* CONTINUE  */
    RETURN = 274,                  /* RETURN  */
    INC = 275,                     /* INC  */
    DEC = 276,                     /* DEC  */
    SHL = 277,                     /* SHL  */
    SHR = 278,                     /* SHR  */
    LOGICAL_AND = 279,             /* LOGICAL_AND  */
    LOGICAL_OR = 280,              /* LOGICAL_OR  */
    EQUAL = 281,                   /* EQUAL  */
    NOT_EQUAL = 282,               /* NOT_EQUAL  */
    GREATER_EQUAL = 283,           /* GREATER_EQUAL  */
    LESS_EQUAL = 284,              /* LESS_EQUAL  */
    INTEGER = 285,                 /* INTEGER  */
    FLOAT = 286,                   /* FLOAT  */
    CHAR = 287,                    /* CHAR  */
    BOOL = 288,                    /* BOOL  */
    IDENTIFIER = 289,              /* IDENTIFIER  */
    U_PLUS = 290,                  /* U_PLUS  */
    U_MINUM = 291,                 /* U_MINUM  */
    PRE_INC = 292,                 /* PRE_INC  */
    PRE_DEC = 293,                 /* PRE_DEC  */
    SUF_INC = 294,                 /* SUF_INC  */
    SUF_DEC = 295,                 /* SUF_DEC  */
    IF_UNMAT = 296                 /* IF_UNMAT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "src/rules/parser_grammar.y"

    BlockNode*                  blockNode;
    StatementNode*              stmtNode;
    VarDeclarationNode*         varDeclNode;
    MultiVarDeclarationNode*    multiVarDeclNode;
    IfNode*                     ifNode;
    SwitchNode*                 switchNode;
    CaseLabelNode*              caseStmtNode;
    WhileNode*                  whileNode;
    DoWhileNode*                doWhileNode;
    ForNode*                    forNode;
    FunctionNode*               functionNode;
    FunctionCallNode*           functionCallNode;
    ReturnStmtNode*             returnStmtNode;
    ExpressionNode*             exprNode;
    TypeNode*                   typeNode;
    ValueNode*                  valueNode;
    IdentifierNode*             identifierNode;

    StmtList*                   stmtList;
    ExprList*                   exprList;
    VarList*                    varList;

    Token                       token;
    Location                    location;

#line 132 "src/rules/parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_RULES_PARSER_HPP_INCLUDED  */
