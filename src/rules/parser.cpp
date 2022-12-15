/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/rules/parser_grammar.y"

#include <iostream>
#include <string>

#include "../parse_tree/parse_tree.h"

using namespace std;

//
// Funções e variáveis ​​externas
//
extern int yylex();
extern Location curLoc;

//
// Protótipos de funções
//
void yyerror(const char* s);

//
// Variáveis Globais
//
StatementNode* programRoot = NULL;

#line 96 "src/rules/parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TYPE_INT = 3,                   /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 4,                 /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_CHAR = 5,                  /* TYPE_CHAR  */
  YYSYMBOL_TYPE_BOOL = 6,                  /* TYPE_BOOL  */
  YYSYMBOL_TYPE_VOID = 7,                  /* TYPE_VOID  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_SWITCH = 11,                    /* SWITCH  */
  YYSYMBOL_CASE = 12,                      /* CASE  */
  YYSYMBOL_DEFAULT = 13,                   /* DEFAULT  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_BREAK = 17,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_INC = 20,                       /* INC  */
  YYSYMBOL_DEC = 21,                       /* DEC  */
  YYSYMBOL_SHL = 22,                       /* SHL  */
  YYSYMBOL_SHR = 23,                       /* SHR  */
  YYSYMBOL_LOGICAL_AND = 24,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 25,                /* LOGICAL_OR  */
  YYSYMBOL_EQUAL = 26,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 27,                 /* NOT_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 28,             /* GREATER_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 29,                /* LESS_EQUAL  */
  YYSYMBOL_INTEGER = 30,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 31,                     /* FLOAT  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_BOOL = 33,                      /* BOOL  */
  YYSYMBOL_IDENTIFIER = 34,                /* IDENTIFIER  */
  YYSYMBOL_35_ = 35,                       /* '-'  */
  YYSYMBOL_36_ = 36,                       /* '+'  */
  YYSYMBOL_37_ = 37,                       /* '*'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_39_ = 39,                       /* '%'  */
  YYSYMBOL_40_ = 40,                       /* '&'  */
  YYSYMBOL_41_ = 41,                       /* '|'  */
  YYSYMBOL_42_ = 42,                       /* '^'  */
  YYSYMBOL_43_ = 43,                       /* '~'  */
  YYSYMBOL_44_ = 44,                       /* '!'  */
  YYSYMBOL_45_ = 45,                       /* '<'  */
  YYSYMBOL_46_ = 46,                       /* '>'  */
  YYSYMBOL_47_ = 47,                       /* '='  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* '['  */
  YYSYMBOL_53_ = 53,                       /* ']'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_56_ = 56,                       /* ';'  */
  YYSYMBOL_U_PLUS = 57,                    /* U_PLUS  */
  YYSYMBOL_U_MINUM = 58,                   /* U_MINUM  */
  YYSYMBOL_PRE_INC = 59,                   /* PRE_INC  */
  YYSYMBOL_PRE_DEC = 60,                   /* PRE_DEC  */
  YYSYMBOL_SUF_INC = 61,                   /* SUF_INC  */
  YYSYMBOL_SUF_DEC = 62,                   /* SUF_DEC  */
  YYSYMBOL_IF_UNMAT = 63,                  /* IF_UNMAT  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_stmt_list = 66,                 /* stmt_list  */
  YYSYMBOL_stmt_block = 67,                /* stmt_block  */
  YYSYMBOL_stmt = 68,                      /* stmt  */
  YYSYMBOL_branch_body = 69,               /* branch_body  */
  YYSYMBOL_var_decl = 70,                  /* var_decl  */
  YYSYMBOL_multi_var_decl = 71,            /* multi_var_decl  */
  YYSYMBOL_expression = 72,                /* expression  */
  YYSYMBOL_expr_1 = 73,                    /* expr_1  */
  YYSYMBOL_expr_2 = 74,                    /* expr_2  */
  YYSYMBOL_expr_3 = 75,                    /* expr_3  */
  YYSYMBOL_if_stmt = 76,                   /* if_stmt  */
  YYSYMBOL_unmatched_if_stmt = 77,         /* unmatched_if_stmt  */
  YYSYMBOL_matched_if_stmt = 78,           /* matched_if_stmt  */
  YYSYMBOL_switch_stmt = 79,               /* switch_stmt  */
  YYSYMBOL_case_stmt = 80,                 /* case_stmt  */
  YYSYMBOL_while_stmt = 81,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 82,             /* do_while_stmt  */
  YYSYMBOL_for_stmt = 83,                  /* for_stmt  */
  YYSYMBOL_for_header = 84,                /* for_header  */
  YYSYMBOL_for_init_stmt = 85,             /* for_init_stmt  */
  YYSYMBOL_for_expr = 86,                  /* for_expr  */
  YYSYMBOL_function = 87,                  /* function  */
  YYSYMBOL_function_header = 88,           /* function_header  */
  YYSYMBOL_param_list = 89,                /* param_list  */
  YYSYMBOL_param_list_ext = 90,            /* param_list_ext  */
  YYSYMBOL_function_call = 91,             /* function_call  */
  YYSYMBOL_arg_list = 92,                  /* arg_list  */
  YYSYMBOL_arg_list_ext = 93,              /* arg_list_ext  */
  YYSYMBOL_return_stmt = 94,               /* return_stmt  */
  YYSYMBOL_type = 95,                      /* type  */
  YYSYMBOL_value = 96,                     /* value  */
  YYSYMBOL_ident = 97                      /* ident  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   910

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    39,    40,     2,
      48,    49,    37,    36,    54,    35,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    56,
      45,    47,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,    41,    51,    43,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   178,   178,   179,   182,   183,   184,   185,   188,   189,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   211,   212,   221,
     222,   223,   224,   227,   228,   229,   230,   237,   238,   239,
     242,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   263,
     264,   265,   266,   269,   270,   272,   273,   276,   278,   279,
     280,   288,   289,   292,   295,   303,   306,   307,   315,   318,
     326,   329,   332,   333,   334,   337,   338,   346,   349,   352,
     353,   354,   357,   358,   361,   364,   365,   366,   369,   370,
     373,   374,   382,   383,   384,   385,   386,   389,   390,   391,
     392,   395
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TYPE_INT",
  "TYPE_FLOAT", "TYPE_CHAR", "TYPE_BOOL", "TYPE_VOID", "CONST", "IF",
  "ELSE", "SWITCH", "CASE", "DEFAULT", "FOR", "DO", "WHILE", "BREAK",
  "CONTINUE", "RETURN", "INC", "DEC", "SHL", "SHR", "LOGICAL_AND",
  "LOGICAL_OR", "EQUAL", "NOT_EQUAL", "GREATER_EQUAL", "LESS_EQUAL",
  "INTEGER", "FLOAT", "CHAR", "BOOL", "IDENTIFIER", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'&'", "'|'", "'^'", "'~'", "'!'", "'<'", "'>'", "'='",
  "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "':'", "';'", "U_PLUS",
  "U_MINUM", "PRE_INC", "PRE_DEC", "SUF_INC", "SUF_DEC", "IF_UNMAT",
  "$accept", "program", "stmt_list", "stmt_block", "stmt", "branch_body",
  "var_decl", "multi_var_decl", "expression", "expr_1", "expr_2", "expr_3",
  "if_stmt", "unmatched_if_stmt", "matched_if_stmt", "switch_stmt",
  "case_stmt", "while_stmt", "do_while_stmt", "for_stmt", "for_header",
  "for_init_stmt", "for_expr", "function", "function_header", "param_list",
  "param_list_ext", "function_call", "arg_list", "arg_list_ext",
  "return_stmt", "type", "value", "ident", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     179,   -43,   -57,   -57,   -57,   -57,   -57,   213,   -34,   -28,
      91,   -52,    10,   395,    16,     9,    11,    91,   133,   133,
     -57,   -57,   -57,   -57,   -57,    91,    91,    91,    91,    91,
     287,   -57,     5,   233,   -57,   -57,   -45,     1,     3,   -57,
     -57,    13,   -57,   -57,   -57,   -57,   -57,   -57,    12,   -57,
     395,   -57,    20,   -57,    15,    38,   -57,    26,   -57,   -57,
     -57,    38,    91,    91,   495,   449,   468,   -57,   -57,    60,
      91,   -57,   -57,   735,   -57,   -57,   -57,   -57,   -57,   -57,
     595,   -57,   341,   -57,   -57,   -57,    38,   -57,    38,   -57,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,    -1,    91,    30,   623,
     651,   449,   -57,   -57,   735,    22,    38,    31,   679,   -57,
     -57,    53,    55,   220,   220,   782,   761,   864,   864,   136,
     136,   -15,   -15,   -57,   -57,   -57,   845,   803,   824,   136,
     136,   735,    91,   198,   529,    56,    50,    91,   395,   395,
     -57,    91,    59,    91,   395,    91,    91,   735,    54,    64,
      62,   -57,    91,   735,   104,   -57,   735,    61,   707,   -57,
     735,   735,   -57,   198,   562,   395,    91,   -57,    65,   -57,
      71,   -57
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,   102,   103,   104,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,     0,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     6,     4,     0,     0,     0,    37,
      38,    39,    16,    71,    72,    17,    18,    19,     0,    21,
       0,    22,     0,    70,     0,     0,    68,    69,    25,    26,
      24,     0,     0,     0,     0,     0,    82,    28,    27,     0,
       0,    11,    12,   100,    63,    64,    60,    59,    61,    62,
       0,     8,     0,     1,     7,     5,     0,    14,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      65,    66,    20,    80,    87,    23,    29,    95,    30,     0,
       0,     0,    77,    83,    84,     0,     0,     0,     0,    67,
       9,    33,    35,    49,    50,    51,    52,    57,    58,    54,
      56,    42,    41,    43,    44,    45,    46,    47,    48,    55,
      53,    40,     0,    89,    96,     0,     0,     0,     0,     0,
      76,    85,    29,     0,     0,     0,     0,    31,    90,     0,
       0,    94,     0,    32,    73,    75,    86,     0,     0,    78,
      34,    36,    88,     0,    97,     0,    85,    79,    91,    74,
       0,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,    98,    21,    36,   -49,   -54,   -57,   -10,   -57,
     -57,    44,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -56,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,    -5,   -57,   -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    32,    33,    67,    68,    69,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   125,   177,    51,    52,   169,   170,    53,   155,   156,
      54,    55,    56,    57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   113,    61,    65,   116,    83,    58,    73,    59,    86,
     118,    87,   123,    60,    62,    76,    77,    78,    79,    80,
      63,    34,   100,   101,   102,    90,    91,    92,    93,    94,
      95,    96,    97,   110,   111,   131,    35,   132,    98,    99,
     100,   101,   102,   103,   104,   105,   152,   153,   106,   107,
     108,    34,   119,   120,    84,    88,   124,    89,    66,   109,
     128,   126,    74,    75,    70,    71,    35,    72,   112,    85,
      30,   115,    24,   114,   117,   162,   127,   157,   161,   163,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   168,
     165,   122,   166,    84,   172,   171,   152,   154,   -92,   174,
     175,    18,    19,   182,   185,   179,   183,   186,    85,   -93,
     191,    20,    21,    22,    23,    24,    25,    26,    82,   188,
     190,     0,     0,     0,    27,    28,   189,     0,     0,    29,
       0,     0,   167,     0,     0,     0,     0,   173,   126,     0,
       0,   176,     0,   178,     0,   180,   181,   160,    90,    91,
       0,     0,   184,    20,    21,    22,    23,    24,     0,     0,
       0,    98,    99,   100,   101,   102,   176,     0,   126,    -2,
       1,    29,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     2,     3,     4,     5,     6,     7,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     2,     3,     4,     5,
       6,     0,    27,    28,     0,     0,     0,    29,     0,    30,
       0,     0,     0,    -3,     1,    31,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    98,    99,   100,   101,   102,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     1,    31,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,     0,    29,     0,    30,    81,     0,
       0,     0,     1,    31,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    27,    28,     0,     0,     0,    29,
       0,    30,   130,     0,     0,     0,     1,    31,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    27,    28,
       0,     0,     0,    29,     0,    30,     0,     0,     0,     0,
       1,    31,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     2,     3,     4,     5,     6,     7,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    18,    19,
       0,     0,    27,    28,     0,     0,     0,    29,    20,    21,
      22,    23,    24,    25,    26,    31,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
     121,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,   106,   107,   108,     0,     0,     0,
       0,     0,     0,   -98,    90,    91,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   106,   107,   108,
       0,     0,     0,     0,     0,     0,   -99,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     106,   107,   108,     0,   129,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   106,   107,
     108,     0,   158,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,   106,   107,   108,     0,
     159,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,   106,   107,   108,     0,   164,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,   104,   105,
       0,     0,   106,   107,   108,     0,   187,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     106,   107,   108,    90,    91,    92,     0,    94,    95,    96,
      97,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,    90,    91,   106,   107,    94,    95,
      96,    97,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,   104,   105,    90,    91,   106,   107,    94,
      95,    96,    97,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,     0,   105,    90,    91,   106,   107,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,     0,     0,    90,    91,   106,
     107,    94,    95,    96,    97,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,     0,    90,    91,     0,     0,
     106,   107,    96,    97,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,   106,
     107
};

static const yytype_int16 yycheck[] =
{
      10,    50,     7,    55,    55,     0,    49,    17,    51,    54,
      61,    56,    66,    56,    48,    25,    26,    27,    28,    29,
      48,     0,    37,    38,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    20,    21,    86,     0,    88,    35,    36,
      37,    38,    39,    40,    41,    42,    47,    48,    45,    46,
      47,    30,    62,    63,    33,    54,    66,    56,    48,    56,
      70,    66,    18,    19,    48,    56,    30,    56,    56,    33,
      50,    56,    34,    52,    48,   126,    16,    47,    56,    48,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   153,
      47,    65,    47,    82,    54,    49,    47,   117,    54,   158,
     159,    20,    21,    49,    10,   164,    54,    56,    82,    54,
      49,    30,    31,    32,    33,    34,    35,    36,    30,   183,
     186,    -1,    -1,    -1,    43,    44,   185,    -1,    -1,    48,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   153,    -1,
      -1,   161,    -1,   163,    -1,   165,   166,   121,    22,    23,
      -1,    -1,   172,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    35,    36,    37,    38,    39,   186,    -1,   183,     0,
       1,    48,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,     3,     4,     5,     6,
       7,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,     0,     1,    56,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,     1,    56,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,
      -1,    -1,     1,    56,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    50,    51,    -1,    -1,    -1,     1,    56,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,
       1,    56,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     3,     4,     5,     6,     7,     8,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    20,    21,
      -1,    -1,    43,    44,    -1,    -1,    -1,    48,    30,    31,
      32,    33,    34,    35,    36,    56,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    -1,    49,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    -1,    49,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    45,    46,    47,    -1,
      49,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    -1,    49,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    45,    46,    47,    -1,    49,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    22,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    22,    23,    45,    46,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    22,    23,    45,    46,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    22,    23,    45,    46,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    22,    23,    45,
      46,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    22,    23,    -1,    -1,
      45,    46,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      30,    31,    32,    33,    34,    35,    36,    43,    44,    48,
      50,    56,    65,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    87,    88,    91,    94,    95,    96,    97,    49,    51,
      56,    95,    48,    48,    72,    55,    48,    67,    68,    69,
      48,    56,    56,    72,    75,    75,    72,    72,    72,    72,
      72,    51,    66,     0,    67,    68,    54,    56,    54,    56,
      22,    23,    24,    25,    26,    27,    28,    29,    35,    36,
      37,    38,    39,    40,    41,    42,    45,    46,    47,    56,
      20,    21,    56,    69,    67,    56,    97,    48,    97,    72,
      72,    55,    68,    70,    72,    85,    95,    16,    72,    49,
      51,    97,    97,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    47,    48,    72,    92,    93,    47,    49,    49,
      68,    56,    97,    48,    49,    47,    47,    72,    70,    89,
      90,    49,    54,    72,    69,    69,    72,    86,    72,    69,
      72,    72,    49,    54,    72,    10,    56,    49,    70,    69,
      86,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    71,    71,    71,    71,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      75,    76,    76,    77,    78,    79,    80,    80,    81,    82,
      83,    84,    85,    85,    85,    86,    86,    87,    88,    89,
      89,    89,    90,    90,    91,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     2,     3,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     2,     2,     2,     2,     1,     1,     2,
       3,     4,     5,     3,     5,     3,     5,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     5,     7,     5,     4,     3,     5,     6,
       2,     8,     0,     1,     1,     0,     1,     2,     5,     0,
       1,     3,     1,     3,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_program: /* program  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).blockNode) != NULL) {
        delete ((*yyvaluep).blockNode);
        ((*yyvaluep).blockNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1210 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_stmt_list: /* stmt_list  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).stmtList) != NULL) {
        delete ((*yyvaluep).stmtList);
        ((*yyvaluep).stmtList) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1224 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_stmt_block: /* stmt_block  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).blockNode) != NULL) {
        delete ((*yyvaluep).blockNode);
        ((*yyvaluep).blockNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1238 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_stmt: /* stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).stmtNode) != NULL) {
        delete ((*yyvaluep).stmtNode);
        ((*yyvaluep).stmtNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1252 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_branch_body: /* branch_body  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).stmtNode) != NULL) {
        delete ((*yyvaluep).stmtNode);
        ((*yyvaluep).stmtNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1266 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_var_decl: /* var_decl  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).varDeclNode) != NULL) {
        delete ((*yyvaluep).varDeclNode);
        ((*yyvaluep).varDeclNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1280 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_multi_var_decl: /* multi_var_decl  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).multiVarDeclNode) != NULL) {
        delete ((*yyvaluep).multiVarDeclNode);
        ((*yyvaluep).multiVarDeclNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1294 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_expression: /* expression  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprNode) != NULL) {
        delete ((*yyvaluep).exprNode);
        ((*yyvaluep).exprNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1308 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_expr_1: /* expr_1  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprNode) != NULL) {
        delete ((*yyvaluep).exprNode);
        ((*yyvaluep).exprNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1322 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_expr_2: /* expr_2  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprNode) != NULL) {
        delete ((*yyvaluep).exprNode);
        ((*yyvaluep).exprNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1336 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_expr_3: /* expr_3  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprNode) != NULL) {
        delete ((*yyvaluep).exprNode);
        ((*yyvaluep).exprNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1350 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_if_stmt: /* if_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).ifNode) != NULL) {
        delete ((*yyvaluep).ifNode);
        ((*yyvaluep).ifNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1364 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_unmatched_if_stmt: /* unmatched_if_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).ifNode) != NULL) {
        delete ((*yyvaluep).ifNode);
        ((*yyvaluep).ifNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1378 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_matched_if_stmt: /* matched_if_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).ifNode) != NULL) {
        delete ((*yyvaluep).ifNode);
        ((*yyvaluep).ifNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1392 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_switch_stmt: /* switch_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).switchNode) != NULL) {
        delete ((*yyvaluep).switchNode);
        ((*yyvaluep).switchNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1406 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_case_stmt: /* case_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).caseStmtNode) != NULL) {
        delete ((*yyvaluep).caseStmtNode);
        ((*yyvaluep).caseStmtNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1420 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_while_stmt: /* while_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).whileNode) != NULL) {
        delete ((*yyvaluep).whileNode);
        ((*yyvaluep).whileNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1434 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_do_while_stmt: /* do_while_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).doWhileNode) != NULL) {
        delete ((*yyvaluep).doWhileNode);
        ((*yyvaluep).doWhileNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1448 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_for_stmt: /* for_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).forNode) != NULL) {
        delete ((*yyvaluep).forNode);
        ((*yyvaluep).forNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1462 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_for_header: /* for_header  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).forNode) != NULL) {
        delete ((*yyvaluep).forNode);
        ((*yyvaluep).forNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1476 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_for_init_stmt: /* for_init_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).stmtNode) != NULL) {
        delete ((*yyvaluep).stmtNode);
        ((*yyvaluep).stmtNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1490 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_for_expr: /* for_expr  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprNode) != NULL) {
        delete ((*yyvaluep).exprNode);
        ((*yyvaluep).exprNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1504 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_function: /* function  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).functionNode) != NULL) {
        delete ((*yyvaluep).functionNode);
        ((*yyvaluep).functionNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1518 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_function_header: /* function_header  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).functionNode) != NULL) {
        delete ((*yyvaluep).functionNode);
        ((*yyvaluep).functionNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1532 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_param_list: /* param_list  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).varList) != NULL) {
        delete ((*yyvaluep).varList);
        ((*yyvaluep).varList) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1546 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_param_list_ext: /* param_list_ext  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).varList) != NULL) {
        delete ((*yyvaluep).varList);
        ((*yyvaluep).varList) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1560 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_function_call: /* function_call  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).functionCallNode) != NULL) {
        delete ((*yyvaluep).functionCallNode);
        ((*yyvaluep).functionCallNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1574 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_arg_list: /* arg_list  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprList) != NULL) {
        delete ((*yyvaluep).exprList);
        ((*yyvaluep).exprList) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1588 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_arg_list_ext: /* arg_list_ext  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).exprList) != NULL) {
        delete ((*yyvaluep).exprList);
        ((*yyvaluep).exprList) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1602 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_return_stmt: /* return_stmt  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).returnStmtNode) != NULL) {
        delete ((*yyvaluep).returnStmtNode);
        ((*yyvaluep).returnStmtNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1616 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_type: /* type  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).typeNode) != NULL) {
        delete ((*yyvaluep).typeNode);
        ((*yyvaluep).typeNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1630 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_value: /* value  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).valueNode) != NULL) {
        delete ((*yyvaluep).valueNode);
        ((*yyvaluep).valueNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1644 "src/rules/parser.cpp"
        break;

    case YYSYMBOL_ident: /* ident  */
#line 132 "src/rules/parser_grammar.y"
            {
    if (((*yyvaluep).identifierNode) != NULL) {
        delete ((*yyvaluep).identifierNode);
        ((*yyvaluep).identifierNode) = NULL;
        // printf(">> DESTRUCTOR\n");
    } else {
        // printf(">> DESTRUCTOR NULL\n");
    }
}
#line 1658 "src/rules/parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: %empty  */
#line 178 "src/rules/parser_grammar.y"
                                                { (yyval.blockNode) = NULL; programRoot = new BlockNode(); }
#line 1928 "src/rules/parser.cpp"
    break;

  case 3: /* program: stmt_list  */
#line 179 "src/rules/parser_grammar.y"
                                                { (yyval.blockNode) = NULL; programRoot = new BlockNode((*(yyvsp[0].stmtList))[0]->loc, *(yyvsp[0].stmtList)); delete (yyvsp[0].stmtList); }
#line 1934 "src/rules/parser.cpp"
    break;

  case 4: /* stmt_list: stmt  */
#line 182 "src/rules/parser_grammar.y"
                                                { (yyval.stmtList) = new StmtList(); (yyval.stmtList)->push_back((yyvsp[0].stmtNode)); }
#line 1940 "src/rules/parser.cpp"
    break;

  case 5: /* stmt_list: stmt_list stmt  */
#line 183 "src/rules/parser_grammar.y"
                                                { (yyval.stmtList) = (yyvsp[-1].stmtList); (yyval.stmtList)->push_back((yyvsp[0].stmtNode)); }
#line 1946 "src/rules/parser.cpp"
    break;

  case 6: /* stmt_list: stmt_block  */
#line 184 "src/rules/parser_grammar.y"
                                                { (yyval.stmtList) = new StmtList(); (yyval.stmtList)->push_back((yyvsp[0].blockNode)); }
#line 1952 "src/rules/parser.cpp"
    break;

  case 7: /* stmt_list: stmt_list stmt_block  */
#line 185 "src/rules/parser_grammar.y"
                                                { (yyval.stmtList) = (yyvsp[-1].stmtList); (yyval.stmtList)->push_back((yyvsp[0].blockNode)); }
#line 1958 "src/rules/parser.cpp"
    break;

  case 8: /* stmt_block: '{' '}'  */
#line 188 "src/rules/parser_grammar.y"
                                                { (yyval.blockNode) = new BlockNode((yyvsp[-1].location)); }
#line 1964 "src/rules/parser.cpp"
    break;

  case 9: /* stmt_block: '{' stmt_list '}'  */
#line 189 "src/rules/parser_grammar.y"
                                                { (yyval.blockNode) = new BlockNode((yyvsp[-2].location), *(yyvsp[-1].stmtList)); delete (yyvsp[-1].stmtList); }
#line 1970 "src/rules/parser.cpp"
    break;

  case 10: /* stmt: ';'  */
#line 192 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new StatementNode((yyvsp[0].location)); }
#line 1976 "src/rules/parser.cpp"
    break;

  case 11: /* stmt: BREAK ';'  */
#line 193 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new BreakStmtNode((yyvsp[-1].location)); }
#line 1982 "src/rules/parser.cpp"
    break;

  case 12: /* stmt: CONTINUE ';'  */
#line 194 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new ContinueStmtNode((yyvsp[-1].location)); }
#line 1988 "src/rules/parser.cpp"
    break;

  case 13: /* stmt: expression ';'  */
#line 195 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new ExprContainerNode((yyvsp[-1].exprNode)->loc, (yyvsp[-1].exprNode)); }
#line 1994 "src/rules/parser.cpp"
    break;

  case 14: /* stmt: var_decl ';'  */
#line 196 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[-1].varDeclNode); }
#line 2000 "src/rules/parser.cpp"
    break;

  case 15: /* stmt: multi_var_decl ';'  */
#line 197 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[-1].multiVarDeclNode); }
#line 2006 "src/rules/parser.cpp"
    break;

  case 16: /* stmt: if_stmt  */
#line 198 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].ifNode); }
#line 2012 "src/rules/parser.cpp"
    break;

  case 17: /* stmt: switch_stmt  */
#line 199 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].switchNode); }
#line 2018 "src/rules/parser.cpp"
    break;

  case 18: /* stmt: case_stmt  */
#line 200 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].caseStmtNode); }
#line 2024 "src/rules/parser.cpp"
    break;

  case 19: /* stmt: while_stmt  */
#line 201 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].whileNode); }
#line 2030 "src/rules/parser.cpp"
    break;

  case 20: /* stmt: do_while_stmt ';'  */
#line 202 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[-1].doWhileNode); }
#line 2036 "src/rules/parser.cpp"
    break;

  case 21: /* stmt: for_stmt  */
#line 203 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].forNode); }
#line 2042 "src/rules/parser.cpp"
    break;

  case 22: /* stmt: function  */
#line 204 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].functionNode); }
#line 2048 "src/rules/parser.cpp"
    break;

  case 23: /* stmt: return_stmt ';'  */
#line 205 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[-1].returnStmtNode); }
#line 2054 "src/rules/parser.cpp"
    break;

  case 24: /* stmt: error ';'  */
#line 206 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new ErrorNode(curLoc, "invalid syntax"); yyerrok; }
#line 2060 "src/rules/parser.cpp"
    break;

  case 25: /* stmt: error ')'  */
#line 207 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new ErrorNode(curLoc, "invalid syntax"); yyerrok; }
#line 2066 "src/rules/parser.cpp"
    break;

  case 26: /* stmt: error '}'  */
#line 208 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = new ErrorNode(curLoc, "invalid syntax"); yyerrok; }
#line 2072 "src/rules/parser.cpp"
    break;

  case 27: /* branch_body: stmt  */
#line 211 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].stmtNode); }
#line 2078 "src/rules/parser.cpp"
    break;

  case 28: /* branch_body: stmt_block  */
#line 212 "src/rules/parser_grammar.y"
                                                { (yyval.stmtNode) = (yyvsp[0].blockNode); }
#line 2084 "src/rules/parser.cpp"
    break;

  case 29: /* var_decl: type ident  */
#line 221 "src/rules/parser_grammar.y"
                                                            { (yyval.varDeclNode) = new VarDeclarationNode((yyvsp[-1].typeNode), (yyvsp[0].identifierNode)); }
#line 2090 "src/rules/parser.cpp"
    break;

  case 30: /* var_decl: CONST type ident  */
#line 222 "src/rules/parser_grammar.y"
                                                            { (yyval.varDeclNode) = new VarDeclarationNode((yyvsp[-1].typeNode), (yyvsp[0].identifierNode), NULL, true); }
#line 2096 "src/rules/parser.cpp"
    break;

  case 31: /* var_decl: type ident '=' expression  */
#line 223 "src/rules/parser_grammar.y"
                                                            { (yyval.varDeclNode) = new VarDeclarationNode((yyvsp[-3].typeNode), (yyvsp[-2].identifierNode), (yyvsp[0].exprNode)); }
#line 2102 "src/rules/parser.cpp"
    break;

  case 32: /* var_decl: CONST type ident '=' expression  */
#line 224 "src/rules/parser_grammar.y"
                                                            { (yyval.varDeclNode) = new VarDeclarationNode((yyvsp[-3].typeNode), (yyvsp[-2].identifierNode), (yyvsp[0].exprNode), true); }
#line 2108 "src/rules/parser.cpp"
    break;

  case 33: /* multi_var_decl: var_decl ',' ident  */
#line 227 "src/rules/parser_grammar.y"
                                                            { (yyval.multiVarDeclNode) = new MultiVarDeclarationNode((yyvsp[-2].varDeclNode)); (yyval.multiVarDeclNode)->addVar((yyvsp[0].identifierNode)); }
#line 2114 "src/rules/parser.cpp"
    break;

  case 34: /* multi_var_decl: var_decl ',' ident '=' expression  */
#line 228 "src/rules/parser_grammar.y"
                                                            { (yyval.multiVarDeclNode) = new MultiVarDeclarationNode((yyvsp[-4].varDeclNode)); (yyval.multiVarDeclNode)->addVar((yyvsp[-2].identifierNode), (yyvsp[0].exprNode)); }
#line 2120 "src/rules/parser.cpp"
    break;

  case 35: /* multi_var_decl: multi_var_decl ',' ident  */
#line 229 "src/rules/parser_grammar.y"
                                                            { (yyval.multiVarDeclNode) = (yyvsp[-2].multiVarDeclNode); (yyval.multiVarDeclNode)->addVar((yyvsp[0].identifierNode)); }
#line 2126 "src/rules/parser.cpp"
    break;

  case 36: /* multi_var_decl: multi_var_decl ',' ident '=' expression  */
#line 230 "src/rules/parser_grammar.y"
                                                            { (yyval.multiVarDeclNode) = (yyvsp[-4].multiVarDeclNode); (yyval.multiVarDeclNode)->addVar((yyvsp[-2].identifierNode), (yyvsp[0].exprNode)); }
#line 2132 "src/rules/parser.cpp"
    break;

  case 40: /* expr_1: expression '=' expression  */
#line 242 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new AssignOprNode((yyvsp[-1].location), (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2138 "src/rules/parser.cpp"
    break;

  case 41: /* expr_1: expression '+' expression  */
#line 244 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_ADD, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2144 "src/rules/parser.cpp"
    break;

  case 42: /* expr_1: expression '-' expression  */
#line 245 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_SUB, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2150 "src/rules/parser.cpp"
    break;

  case 43: /* expr_1: expression '*' expression  */
#line 246 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_MUL, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2156 "src/rules/parser.cpp"
    break;

  case 44: /* expr_1: expression '/' expression  */
#line 247 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_DIV, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2162 "src/rules/parser.cpp"
    break;

  case 45: /* expr_1: expression '%' expression  */
#line 248 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_MOD, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2168 "src/rules/parser.cpp"
    break;

  case 46: /* expr_1: expression '&' expression  */
#line 249 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_AND, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2174 "src/rules/parser.cpp"
    break;

  case 47: /* expr_1: expression '|' expression  */
#line 250 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_OR, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2180 "src/rules/parser.cpp"
    break;

  case 48: /* expr_1: expression '^' expression  */
#line 251 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_XOR, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2186 "src/rules/parser.cpp"
    break;

  case 49: /* expr_1: expression SHL expression  */
#line 252 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_SHL, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2192 "src/rules/parser.cpp"
    break;

  case 50: /* expr_1: expression SHR expression  */
#line 253 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_SHR, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2198 "src/rules/parser.cpp"
    break;

  case 51: /* expr_1: expression LOGICAL_AND expression  */
#line 254 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_LOGICAL_AND, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2204 "src/rules/parser.cpp"
    break;

  case 52: /* expr_1: expression LOGICAL_OR expression  */
#line 255 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_LOGICAL_OR, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2210 "src/rules/parser.cpp"
    break;

  case 53: /* expr_1: expression '>' expression  */
#line 256 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_GREATER, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2216 "src/rules/parser.cpp"
    break;

  case 54: /* expr_1: expression GREATER_EQUAL expression  */
#line 257 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_GREATER_EQUAL, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2222 "src/rules/parser.cpp"
    break;

  case 55: /* expr_1: expression '<' expression  */
#line 258 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_LESS, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2228 "src/rules/parser.cpp"
    break;

  case 56: /* expr_1: expression LESS_EQUAL expression  */
#line 259 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_LESS_EQUAL, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2234 "src/rules/parser.cpp"
    break;

  case 57: /* expr_1: expression EQUAL expression  */
#line 260 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_EQUAL, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2240 "src/rules/parser.cpp"
    break;

  case 58: /* expr_1: expression NOT_EQUAL expression  */
#line 261 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new BinaryOprNode((yyvsp[-1].location), OPR_NOT_EQUAL, (yyvsp[-2].exprNode), (yyvsp[0].exprNode)); }
#line 2246 "src/rules/parser.cpp"
    break;

  case 59: /* expr_1: '+' expression  */
#line 263 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[-1].location), OPR_U_PLUS, (yyvsp[0].exprNode)); }
#line 2252 "src/rules/parser.cpp"
    break;

  case 60: /* expr_1: '-' expression  */
#line 264 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[-1].location), OPR_U_MINUS, (yyvsp[0].exprNode)); }
#line 2258 "src/rules/parser.cpp"
    break;

  case 61: /* expr_1: '~' expression  */
#line 265 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[-1].location), OPR_NOT, (yyvsp[0].exprNode)); }
#line 2264 "src/rules/parser.cpp"
    break;

  case 62: /* expr_1: '!' expression  */
#line 266 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[-1].location), OPR_LOGICAL_NOT, (yyvsp[0].exprNode)); }
#line 2270 "src/rules/parser.cpp"
    break;

  case 63: /* expr_2: INC expr_3  */
#line 269 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[-1].location), OPR_PRE_INC, (yyvsp[0].exprNode)); }
#line 2276 "src/rules/parser.cpp"
    break;

  case 64: /* expr_2: DEC expr_3  */
#line 270 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[-1].location), OPR_PRE_DEC, (yyvsp[0].exprNode)); }
#line 2282 "src/rules/parser.cpp"
    break;

  case 65: /* expr_2: expr_3 INC  */
#line 272 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[0].location), OPR_SUF_INC, (yyvsp[-1].exprNode)); }
#line 2288 "src/rules/parser.cpp"
    break;

  case 66: /* expr_2: expr_3 DEC  */
#line 273 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new UnaryOprNode((yyvsp[0].location), OPR_SUF_DEC, (yyvsp[-1].exprNode)); }
#line 2294 "src/rules/parser.cpp"
    break;

  case 67: /* expr_3: '(' expression ')'  */
#line 276 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = new ExprContainerNode((yyvsp[-2].location), (yyvsp[-1].exprNode)); }
#line 2300 "src/rules/parser.cpp"
    break;

  case 68: /* expr_3: value  */
#line 278 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = (yyvsp[0].valueNode); }
#line 2306 "src/rules/parser.cpp"
    break;

  case 69: /* expr_3: ident  */
#line 279 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = (yyvsp[0].identifierNode); }
#line 2312 "src/rules/parser.cpp"
    break;

  case 70: /* expr_3: function_call  */
#line 280 "src/rules/parser_grammar.y"
                                                            { (yyval.exprNode) = (yyvsp[0].functionCallNode); }
#line 2318 "src/rules/parser.cpp"
    break;

  case 73: /* unmatched_if_stmt: IF '(' expression ')' branch_body  */
#line 292 "src/rules/parser_grammar.y"
                                                                        { (yyval.ifNode) = new IfNode((yyvsp[-4].location), (yyvsp[-2].exprNode), (yyvsp[0].stmtNode)); }
#line 2324 "src/rules/parser.cpp"
    break;

  case 74: /* matched_if_stmt: IF '(' expression ')' branch_body ELSE branch_body  */
#line 295 "src/rules/parser_grammar.y"
                                                                        { (yyval.ifNode) = new IfNode((yyvsp[-6].location), (yyvsp[-4].exprNode), (yyvsp[-2].stmtNode), (yyvsp[0].stmtNode)); }
#line 2330 "src/rules/parser.cpp"
    break;

  case 75: /* switch_stmt: SWITCH '(' expression ')' branch_body  */
#line 303 "src/rules/parser_grammar.y"
                                                            { (yyval.switchNode) = new SwitchNode((yyvsp[-4].location), (yyvsp[-2].exprNode), (yyvsp[0].stmtNode)); }
#line 2336 "src/rules/parser.cpp"
    break;

  case 76: /* case_stmt: CASE expression ':' stmt  */
#line 306 "src/rules/parser_grammar.y"
                                                            { (yyval.caseStmtNode) = new CaseLabelNode((yyvsp[-3].location), (yyvsp[-2].exprNode), (yyvsp[0].stmtNode)); }
#line 2342 "src/rules/parser.cpp"
    break;

  case 77: /* case_stmt: DEFAULT ':' stmt  */
#line 307 "src/rules/parser_grammar.y"
                                                            { (yyval.caseStmtNode) = new CaseLabelNode((yyvsp[-2].location), NULL, (yyvsp[0].stmtNode)); }
#line 2348 "src/rules/parser.cpp"
    break;

  case 78: /* while_stmt: WHILE '(' expression ')' branch_body  */
#line 315 "src/rules/parser_grammar.y"
                                                                        { (yyval.whileNode) = new WhileNode((yyvsp[-4].location), (yyvsp[-2].exprNode), (yyvsp[0].stmtNode)); }
#line 2354 "src/rules/parser.cpp"
    break;

  case 79: /* do_while_stmt: DO branch_body WHILE '(' expression ')'  */
#line 318 "src/rules/parser_grammar.y"
                                                                        { (yyval.doWhileNode) = new DoWhileNode((yyvsp[-5].location), (yyvsp[-1].exprNode), (yyvsp[-4].stmtNode)); }
#line 2360 "src/rules/parser.cpp"
    break;

  case 80: /* for_stmt: for_header branch_body  */
#line 326 "src/rules/parser_grammar.y"
                                                                        { (yyval.forNode) = (yyvsp[-1].forNode); (yyval.forNode)->body = (yyvsp[0].stmtNode); }
#line 2366 "src/rules/parser.cpp"
    break;

  case 81: /* for_header: FOR '(' for_init_stmt ';' for_expr ';' for_expr ')'  */
#line 329 "src/rules/parser_grammar.y"
                                                                        { (yyval.forNode) = new ForNode((yyvsp[-7].location), (yyvsp[-5].stmtNode), (yyvsp[-3].exprNode), (yyvsp[-1].exprNode), NULL); }
#line 2372 "src/rules/parser.cpp"
    break;

  case 82: /* for_init_stmt: %empty  */
#line 332 "src/rules/parser_grammar.y"
                                                                        { (yyval.stmtNode) = NULL; }
#line 2378 "src/rules/parser.cpp"
    break;

  case 83: /* for_init_stmt: var_decl  */
#line 333 "src/rules/parser_grammar.y"
                                                                        { (yyval.stmtNode) = (yyvsp[0].varDeclNode); }
#line 2384 "src/rules/parser.cpp"
    break;

  case 84: /* for_init_stmt: expression  */
#line 334 "src/rules/parser_grammar.y"
                                                                        { (yyval.stmtNode) = (yyvsp[0].exprNode); }
#line 2390 "src/rules/parser.cpp"
    break;

  case 85: /* for_expr: %empty  */
#line 337 "src/rules/parser_grammar.y"
                                                                        { (yyval.exprNode) = NULL; }
#line 2396 "src/rules/parser.cpp"
    break;

  case 86: /* for_expr: expression  */
#line 338 "src/rules/parser_grammar.y"
                                                                        { (yyval.exprNode) = (yyvsp[0].exprNode); }
#line 2402 "src/rules/parser.cpp"
    break;

  case 87: /* function: function_header stmt_block  */
#line 346 "src/rules/parser_grammar.y"
                                                        { (yyval.functionNode) = (yyvsp[-1].functionNode); (yyval.functionNode)->body = (yyvsp[0].blockNode); }
#line 2408 "src/rules/parser.cpp"
    break;

  case 88: /* function_header: type ident '(' param_list ')'  */
#line 349 "src/rules/parser_grammar.y"
                                                        { (yyval.functionNode) = new FunctionNode((yyvsp[-4].typeNode), (yyvsp[-3].identifierNode), *(yyvsp[-1].varList), NULL); delete (yyvsp[-1].varList); }
#line 2414 "src/rules/parser.cpp"
    break;

  case 89: /* param_list: %empty  */
#line 352 "src/rules/parser_grammar.y"
                                                        { (yyval.varList) = new VarList(); }
#line 2420 "src/rules/parser.cpp"
    break;

  case 90: /* param_list: var_decl  */
#line 353 "src/rules/parser_grammar.y"
                                                        { (yyval.varList) = new VarList(); (yyval.varList)->push_back((yyvsp[0].varDeclNode)); }
#line 2426 "src/rules/parser.cpp"
    break;

  case 91: /* param_list: param_list_ext ',' var_decl  */
#line 354 "src/rules/parser_grammar.y"
                                                        { (yyval.varList) = (yyvsp[-2].varList); (yyval.varList)->push_back((yyvsp[0].varDeclNode)); }
#line 2432 "src/rules/parser.cpp"
    break;

  case 92: /* param_list_ext: var_decl  */
#line 357 "src/rules/parser_grammar.y"
                                                        { (yyval.varList) = new VarList(); (yyval.varList)->push_back((yyvsp[0].varDeclNode)); }
#line 2438 "src/rules/parser.cpp"
    break;

  case 93: /* param_list_ext: param_list_ext ',' var_decl  */
#line 358 "src/rules/parser_grammar.y"
                                                        { (yyval.varList) = (yyvsp[-2].varList); (yyval.varList)->push_back((yyvsp[0].varDeclNode)); }
#line 2444 "src/rules/parser.cpp"
    break;

  case 94: /* function_call: ident '(' arg_list ')'  */
#line 361 "src/rules/parser_grammar.y"
                                                        { (yyval.functionCallNode) = new FunctionCallNode((yyvsp[-3].identifierNode), *(yyvsp[-1].exprList)); delete (yyvsp[-1].exprList); }
#line 2450 "src/rules/parser.cpp"
    break;

  case 95: /* arg_list: %empty  */
#line 364 "src/rules/parser_grammar.y"
                                                        { (yyval.exprList) = new ExprList(); }
#line 2456 "src/rules/parser.cpp"
    break;

  case 96: /* arg_list: expression  */
#line 365 "src/rules/parser_grammar.y"
                                                        { (yyval.exprList) = new ExprList(); (yyval.exprList)->push_back((yyvsp[0].exprNode)); }
#line 2462 "src/rules/parser.cpp"
    break;

  case 97: /* arg_list: arg_list_ext ',' expression  */
#line 366 "src/rules/parser_grammar.y"
                                                        { (yyval.exprList) = (yyvsp[-2].exprList); (yyval.exprList)->push_back((yyvsp[0].exprNode)); }
#line 2468 "src/rules/parser.cpp"
    break;

  case 98: /* arg_list_ext: expression  */
#line 369 "src/rules/parser_grammar.y"
                                                        { (yyval.exprList) = new ExprList(); (yyval.exprList)->push_back((yyvsp[0].exprNode)); }
#line 2474 "src/rules/parser.cpp"
    break;

  case 99: /* arg_list_ext: arg_list_ext ',' expression  */
#line 370 "src/rules/parser_grammar.y"
                                                        { (yyval.exprList) = (yyvsp[-2].exprList); (yyval.exprList)->push_back((yyvsp[0].exprNode)); }
#line 2480 "src/rules/parser.cpp"
    break;

  case 100: /* return_stmt: RETURN expression  */
#line 373 "src/rules/parser_grammar.y"
                                                        { (yyval.returnStmtNode) = new ReturnStmtNode((yyvsp[-1].location), (yyvsp[0].exprNode)); }
#line 2486 "src/rules/parser.cpp"
    break;

  case 101: /* return_stmt: RETURN  */
#line 374 "src/rules/parser_grammar.y"
                                                        { (yyval.returnStmtNode) = new ReturnStmtNode((yyvsp[0].location), NULL); }
#line 2492 "src/rules/parser.cpp"
    break;

  case 102: /* type: TYPE_INT  */
#line 382 "src/rules/parser_grammar.y"
                                    { (yyval.typeNode) = new TypeNode((yyvsp[0].location), DTYPE_INT); }
#line 2498 "src/rules/parser.cpp"
    break;

  case 103: /* type: TYPE_FLOAT  */
#line 383 "src/rules/parser_grammar.y"
                                    { (yyval.typeNode) = new TypeNode((yyvsp[0].location), DTYPE_FLOAT); }
#line 2504 "src/rules/parser.cpp"
    break;

  case 104: /* type: TYPE_CHAR  */
#line 384 "src/rules/parser_grammar.y"
                                    { (yyval.typeNode) = new TypeNode((yyvsp[0].location), DTYPE_CHAR); }
#line 2510 "src/rules/parser.cpp"
    break;

  case 105: /* type: TYPE_BOOL  */
#line 385 "src/rules/parser_grammar.y"
                                    { (yyval.typeNode) = new TypeNode((yyvsp[0].location), DTYPE_BOOL); }
#line 2516 "src/rules/parser.cpp"
    break;

  case 106: /* type: TYPE_VOID  */
#line 386 "src/rules/parser_grammar.y"
                                    { (yyval.typeNode) = new TypeNode((yyvsp[0].location), DTYPE_VOID); }
#line 2522 "src/rules/parser.cpp"
    break;

  case 107: /* value: INTEGER  */
#line 389 "src/rules/parser_grammar.y"
                                    { (yyval.valueNode) = new ValueNode((yyvsp[0].token).loc, DTYPE_INT, (yyvsp[0].token).value); delete (yyvsp[0].token).value; }
#line 2528 "src/rules/parser.cpp"
    break;

  case 108: /* value: FLOAT  */
#line 390 "src/rules/parser_grammar.y"
                                    { (yyval.valueNode) = new ValueNode((yyvsp[0].token).loc, DTYPE_FLOAT, (yyvsp[0].token).value); delete (yyvsp[0].token).value; }
#line 2534 "src/rules/parser.cpp"
    break;

  case 109: /* value: CHAR  */
#line 391 "src/rules/parser_grammar.y"
                                    { (yyval.valueNode) = new ValueNode((yyvsp[0].token).loc, DTYPE_CHAR, (yyvsp[0].token).value); delete (yyvsp[0].token).value; }
#line 2540 "src/rules/parser.cpp"
    break;

  case 110: /* value: BOOL  */
#line 392 "src/rules/parser_grammar.y"
                                    { (yyval.valueNode) = new ValueNode((yyvsp[0].token).loc, DTYPE_BOOL, (yyvsp[0].token).value); delete (yyvsp[0].token).value; }
#line 2546 "src/rules/parser.cpp"
    break;

  case 111: /* ident: IDENTIFIER  */
#line 395 "src/rules/parser_grammar.y"
                                    { (yyval.identifierNode) = new IdentifierNode((yyvsp[0].token).loc, (yyvsp[0].token).value); delete (yyvsp[0].token).value; }
#line 2552 "src/rules/parser.cpp"
    break;


#line 2556 "src/rules/parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 398 "src/rules/parser_grammar.y"


// =====================================================================================================
// Seção de sub-rotinas do usuário
// ========================

void yyerror(const char* s) {
    
}
