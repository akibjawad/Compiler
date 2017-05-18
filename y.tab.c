/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<cstring>
#include<cmath>
#include<fstream>
#include <vector>
#include "1405112symboltable.h"

#define YYSTYPE symbolInfo*
#define YYDEBUG 1

using namespace std;


int yyparse(void);
int yylex(void);
extern int line_count;
extern int error;
FILE *temp;
extern FILE *yyin;
extern FILE *logout;
extern FILE *tokenout;
FILE *code;
FILE *errorout;
FILE *fp;
symbolTable *sTable=new symbolTable(7);
scopeTable *table=sTable->curr;
scopeTable *parentTable;
string variable_type;
string t;
int labelCount=0;
int tempCount=0;
char *label;

symbolInfo *tempSymbolinfo;
symbolInfo *parameterList=new symbolInfo();
vector<string> variableList;

string typeMatch(symbolInfo *s1,symbolInfo *s2)
{
	if(s1->type==s2->type)
		return s1->type;
	else if(s1->type=="float" && s1->type=="int")
		return s1->type;
	else
		return "nomatch";
}

void yyerror(const char *s)
{
	fprintf(errorout,"Line no:%d %s\n",line_count,s);
}
char *newLabel()
{
	char *lb= new char[4];
	strcpy(lb,"L");
	char b[3];
	sprintf(b,"%d", labelCount);
	labelCount++;
	strcat(lb,b);
	return lb;
}

char *newTemp()
{
	char *t= new char[4];
	strcpy(t,"t");
	char b[3];
	sprintf(b,"%d", tempCount);
	tempCount++;
	strcat(t,b);
	return t;
}


#line 145 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    FOR = 260,
    WHILE = 261,
    DO = 262,
    BREAK = 263,
    INT = 264,
    CHAR = 265,
    FLOAT = 266,
    DOUBLE = 267,
    VOID = 268,
    RETURN = 269,
    SWITCH = 270,
    CASE = 271,
    DEFAULT = 272,
    CONTINUE = 273,
    CONST_INT = 274,
    CONST_FLOAT = 275,
    ADDOP = 276,
    MULOP = 277,
    INCOP = 278,
    DECOP = 279,
    ASSIGNOP = 280,
    RELOP = 281,
    LOGICOP = 282,
    NOT = 283,
    LPAREN = 284,
    RPAREN = 285,
    LCURL = 286,
    RCURL = 287,
    LTHIRD = 288,
    RTHIRD = 289,
    COMMA = 290,
    SEMICOLON = 291,
    CONST_CHAR = 292,
    STRING = 293,
    ID = 294,
    MAIN = 295,
    PRINTLN = 296,
    LOWER_THAN_ELSE = 297
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define DO 262
#define BREAK 263
#define INT 264
#define CHAR 265
#define FLOAT 266
#define DOUBLE 267
#define VOID 268
#define RETURN 269
#define SWITCH 270
#define CASE 271
#define DEFAULT 272
#define CONTINUE 273
#define CONST_INT 274
#define CONST_FLOAT 275
#define ADDOP 276
#define MULOP 277
#define INCOP 278
#define DECOP 279
#define ASSIGNOP 280
#define RELOP 281
#define LOGICOP 282
#define NOT 283
#define LPAREN 284
#define RPAREN 285
#define LCURL 286
#define RCURL 287
#define LTHIRD 288
#define RTHIRD 289
#define COMMA 290
#define SEMICOLON 291
#define CONST_CHAR 292
#define STRING 293
#define ID 294
#define MAIN 295
#define PRINTLN 296
#define LOWER_THAN_ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 280 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    44,    42,     2,    43,     2,    45,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,   102,   108,   117,   122,   127,   133,   148,
     185,   198,   209,   226,   240,   250,   255,   263,   269,   275,
     281,   289,   298,   309,   318,   332,   338,   347,   354,   360,
     366,   383,   396,   413,   428,   433,   440,   446,   453,   459,
     475,   481,   499,   509,   549,   554,   599,   606,   650,   656,
     688,   701,   712,   719,   736,   750,   756,   762,   769,   785,
     802,   808,   812,   820
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BREAK", "INT", "CHAR", "FLOAT", "DOUBLE", "VOID", "RETURN", "SWITCH",
  "CASE", "DEFAULT", "CONTINUE", "CONST_INT", "CONST_FLOAT", "ADDOP",
  "MULOP", "INCOP", "DECOP", "ASSIGNOP", "RELOP", "LOGICOP", "NOT",
  "LPAREN", "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "COMMA",
  "SEMICOLON", "CONST_CHAR", "STRING", "ID", "MAIN", "PRINTLN", "'+'",
  "'-'", "'*'", "'/'", "LOWER_THAN_ELSE", "$accept", "start", "program",
  "unit", "func_declaration", "func_definition", "parameter_list",
  "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    43,    45,    42,    47,   297
};
# endif

#define YYPACT_NINF -59

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,   -59,   -59,   -59,    54,    27,   -59,   -59,   -59,   -59,
      19,   -59,   -59,   -23,   -17,    27,    37,    20,   -59,   -21,
      21,    31,    30,   -10,    27,   -59,   -59,    42,    66,   -59,
     -59,    23,    36,    44,    45,    47,    -4,   -59,   -59,    -4,
      -4,    -4,   -59,   -59,    17,    49,   -59,   -59,    43,   103,
     -59,   -59,    28,    48,   -59,    56,     1,    59,   -59,   -59,
     -59,   -59,    -4,   136,    -4,    52,    25,   -59,   -59,    60,
      -4,    -4,    50,    58,   -59,   -59,   -59,   -59,    -4,   -59,
      -4,    -4,    -4,    -4,    62,   136,    63,   -59,   -59,   -59,
      69,    61,    67,    70,   -59,   -59,    59,    82,   -59,   140,
      -4,   140,   -59,    -4,   -59,    68,   106,    81,   -59,   -59,
     -59,   140,   140,   -59,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    18,    19,    20,     0,     2,     4,     6,     7,     5,
       0,     1,     3,    23,     0,    14,     0,     0,    17,     0,
      13,     0,    21,     0,     0,    12,    24,     0,     0,     8,
       9,    11,     0,     0,     0,     0,     0,    56,    57,     0,
       0,     0,    16,    36,    38,     0,    29,    27,     0,     0,
      25,    28,    53,     0,    40,    42,    44,    46,    48,    52,
      10,    22,     0,     0,     0,     0,    53,    50,    51,     0,
      61,     0,     0,    23,    15,    26,    58,    59,     0,    37,
       0,     0,     0,     0,     0,     0,     0,    35,    55,    63,
       0,    60,     0,     0,    41,    43,    47,    45,    49,     0,
       0,     0,    54,     0,    39,     0,    31,     0,    33,    62,
      34,     0,     0,    32,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -59,   108,   -59,   -59,   -59,    92,    29,     8,
     -59,   -59,   -44,   -52,   -39,   -34,   -58,    38,    39,    46,
     -36,   -59,   -59,   -59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    19,    46,    47,    48,
      14,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    90,    91
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      66,    66,    65,    67,    68,    75,    15,    69,    10,    23,
      16,    85,    89,    10,    24,    37,    38,    39,    17,    18,
      94,    28,    81,    20,    40,    41,    29,    82,    84,     9,
      86,    66,    31,   100,     9,    44,     1,    92,     2,    66,
       3,    66,    66,    66,    66,   109,    70,    98,    76,    77,
      71,    76,    77,    78,    11,   106,    21,   108,    13,    22,
      25,    32,    60,    27,    66,    26,   107,   113,   114,    33,
      61,    34,    35,    62,    63,     1,    64,     2,    72,     3,
      36,    83,    73,    80,    79,    37,    38,    39,    87,    93,
      88,    16,    99,   101,    40,    41,   103,    28,    42,   102,
     105,   104,    43,    81,   110,    44,    33,    45,    34,    35,
     111,   112,     1,    12,     2,    30,     3,    36,    95,     0,
       0,    97,    37,    38,    39,     0,     0,    96,     0,     0,
       0,    40,    41,     0,    28,    74,     0,     0,     0,    43,
       0,     0,    44,    33,    45,    34,    35,     0,     0,     1,
       0,     2,     0,     3,    36,    37,    38,    39,     0,    37,
      38,    39,     0,     0,    40,    41,     0,     0,    40,    41,
       0,    28,    43,     0,     0,    44,    43,     0,     0,    44,
       0,    45
};

static const yytype_int8 yycheck[] =
{
      39,    40,    36,    39,    40,    49,    29,    41,     0,    30,
      33,    63,    70,     5,    35,    19,    20,    21,    35,    36,
      78,    31,    21,    15,    28,    29,    36,    26,    62,     0,
      64,    70,    24,    85,     5,    39,     9,    71,    11,    78,
      13,    80,    81,    82,    83,   103,    29,    83,    23,    24,
      33,    23,    24,    25,     0,    99,    19,   101,    39,    39,
      39,    19,    39,    33,   103,    34,   100,   111,   112,     3,
      34,     5,     6,    29,    29,     9,    29,    11,    29,    13,
      14,    22,    39,    27,    36,    19,    20,    21,    36,    39,
      30,    33,    30,    30,    28,    29,    35,    31,    32,    30,
      30,    34,    36,    21,    36,    39,     3,    41,     5,     6,
       4,    30,     9,     5,    11,    23,    13,    14,    80,    -1,
      -1,    82,    19,    20,    21,    -1,    -1,    81,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,    -1,    -1,    -1,    36,
      -1,    -1,    39,     3,    41,     5,     6,    -1,    -1,     9,
      -1,    11,    -1,    13,    14,    19,    20,    21,    -1,    19,
      20,    21,    -1,    -1,    28,    29,    -1,    -1,    28,    29,
      -1,    31,    36,    -1,    -1,    39,    36,    -1,    -1,    39,
      -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    13,    48,    49,    50,    51,    52,    55,
      56,     0,    50,    39,    57,    29,    33,    35,    36,    53,
      56,    19,    39,    30,    35,    39,    34,    33,    31,    36,
      54,    56,    19,     3,     5,     6,    14,    19,    20,    21,
      28,    29,    32,    36,    39,    41,    54,    55,    56,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      39,    34,    29,    29,    29,    62,    61,    67,    67,    62,
      29,    33,    29,    39,    32,    59,    23,    24,    25,    36,
      27,    21,    26,    22,    62,    60,    62,    36,    30,    63,
      69,    70,    62,    39,    63,    64,    66,    65,    67,    30,
      60,    30,    30,    35,    34,    30,    59,    62,    59,    63,
      36,     4,    30,    59,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    52,
      53,    53,    53,    53,    53,    54,    54,    55,    56,    56,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     6,
       4,     3,     2,     1,     0,     3,     2,     3,     1,     1,
       1,     3,     6,     1,     4,     1,     2,     1,     1,     1,
       7,     5,     7,     5,     5,     3,     1,     2,     1,     4,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       2,     2,     1,     1,     4,     3,     1,     1,     2,     2,
       1,     0,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 92 "parser.y" /* yacc.c:1646  */
    {

			fprintf(tokenout,"Line no : %d start : program\n",line_count);
			fprintf(logout,"Total Error : %d\n",error);
			fprintf(logout,"Total Line Count : %d\n",line_count);
			fprintf(code,"%s",(yyvsp[0])->code.c_str());

	  }
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "parser.y" /* yacc.c:1646  */
    {
				fprintf(tokenout,"Line no : %d program : program unit\n",line_count);
				(yyval)=new symbolInfo((yyvsp[-1]));
				(yyval)->code+=(yyvsp[0])->code;
			}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 109 "parser.y" /* yacc.c:1646  */
    {
				fprintf(tokenout,"Line no : %d program : unit\n",line_count);
				(yyval)=new symbolInfo((yyvsp[0]));
				
			}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 118 "parser.y" /* yacc.c:1646  */
    {
			fprintf(tokenout,"Line no : %d unit: var_declaration\n",line_count);
			(yyval)=new symbolInfo((yyvsp[0]));
		}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 123 "parser.y" /* yacc.c:1646  */
    {
     		fprintf(tokenout,"Line no : %d unit :func_declaration\n",line_count);
     		(yyval)=new symbolInfo((yyvsp[0]));
     	}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 128 "parser.y" /* yacc.c:1646  */
    {
     		fprintf(tokenout,"Line no : %d unit :func_definition\n",line_count);
     		(yyval)=new symbolInfo((yyvsp[0]));
     	}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 134 "parser.y" /* yacc.c:1646  */
    {
						parentTable=table->parent;
						parentTable->insert((yyvsp[-4])->name,"function");
						fprintf(tokenout,"Line no : %d func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON value %s\n",line_count,(yyvsp[-4])->name.c_str());
						variableList.push_back((yyvsp[-4])->name);
						sTable->PrintCurrentScopeTable(logout);
						sTable->exitScope();
						table=sTable->curr;
						delete (yyvsp[-4]);
						//delete $1;
						//delete $4;
					}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "parser.y" /* yacc.c:1646  */
    {
						if(sTable->lookup_syminfo((yyvsp[-4])->name)==NULL)
						{
							parentTable=table->parent;
							parentTable->insert((yyvsp[-4])->name,"function");
						}
						printf("Line no : %d func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement %s\n ",line_count,(yyvsp[-4])->name.c_str());
						(yyval)=new symbolInfo();
						(yyval)->code+="PROC "+(yyvsp[-4])->name+"\n";
						if((yyvsp[-4])->name=="main")
						{

						}
						if((yyvsp[-4])->name!="main")
						{
							(yyval)->code+="PUSH AX\n";
							(yyval)->code+="PUSH BX\n";
							(yyval)->code+="PUSH CX\n";
							(yyval)->code+="PUSH DX\n";
						}
						(yyval)->code+=(yyvsp[0])->code;
						if((yyvsp[-4])->name!="main")
						{
							(yyval)->code+="POP DX\n";
							(yyval)->code+="POP CX\n";
							(yyval)->code+="POP BX\n";
							(yyval)->code+="POP AX\n";
						}
						(yyval)->code+="END "+(yyvsp[-4])->name+"\n";
				  		fprintf(tokenout,"Line no : %d func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement",line_count);
				  		sTable->PrintCurrentScopeTable(logout);
				  		sTable->exitScope();
						table=sTable->curr;
				  	}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 186 "parser.y" /* yacc.c:1646  */
    {
						symbolInfo *x=parameterList;
 						while(x->next)
 						{
 							x=x->next;
 						}
 						x->next=new symbolInfo((yyvsp[0])->name,variable_type);
						table->insert((yyvsp[0])->name,variable_type);
						fprintf(tokenout,"Line No : %d parameter_list  : parameter_list COMMA type_specifier ID\n",line_count);
						//delete $4;
					}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 199 "parser.y" /* yacc.c:1646  */
    {
						symbolInfo *x=parameterList;
 						while(x->next)
 						{
 							x=x->next;
 						}
 						x->next=new symbolInfo("type",variable_type);
						fprintf(tokenout,"Line No : %d parameter_list  : parameter_list COMMA type_specifier\n",line_count);
					}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 210 "parser.y" /* yacc.c:1646  */
    {
 						symbolInfo *x=parameterList;
 						while(x->next)
 						{
 							x=x->next;
 						}
 						x->next=new symbolInfo((yyvsp[0])->name,variable_type);
 						sTable->enterScope();
 						table=sTable->curr;
						table->insert((yyvsp[0])->name,variable_type);

 						fprintf(tokenout,"Line No : %d parameter_list  : type_specifier ID \n",line_count);
 						//delete $2;here it is needed to be used double paramter
 					}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 227 "parser.y" /* yacc.c:1646  */
    {
 						symbolInfo *x=parameterList;
 						while(x->next)
 						{
 							x=x->next;
 						}
 						x->next=new symbolInfo("type",variable_type);
 						sTable->enterScope();
 						table=sTable->curr;
 						fprintf(tokenout,"Line No : %d parameter_list  : type_specifier \n",line_count);
 					}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 240 "parser.y" /* yacc.c:1646  */
    {
 						parameterList->next=NULL;
 						(yyval)=new symbolInfo();
 						sTable->enterScope();
 						table=sTable->curr;
 						(yyval)=new symbolInfo();
 						fprintf(tokenout,"Line No : %d parameter_list  : VOID \n",line_count);
 					}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 250 "parser.y" /* yacc.c:1646  */
    {
							fprintf(tokenout,"Line No : %d compound_statement : LCURL statements RCURL\n",line_count);
							(yyval)=(yyvsp[-1]);
						}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "parser.y" /* yacc.c:1646  */
    {
 		    	   			fprintf(tokenout,"Line No : %d compound_statement : LCURL RCURL\n",line_count);
 		    	   			(yyval)=new symbolInfo("compound_statement","dummy");
 		    	   		}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 264 "parser.y" /* yacc.c:1646  */
    {
						(tokenout,"Line No : %d var_declaration : type_specifier declaration_list\n",line_count);
					}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 270 "parser.y" /* yacc.c:1646  */
    {
						fprintf(tokenout,"Line No : %d type_specifier : INT  \n",line_count);
						variable_type="int";
					}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 276 "parser.y" /* yacc.c:1646  */
    {
 						fprintf(tokenout,"Line No : %d type_specifier : FLOAT  found\n",line_count);
 						variable_type="float";
 					}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 282 "parser.y" /* yacc.c:1646  */
    {
 						fprintf(tokenout,"Line No : %d type_specifier : VOID  found\n",line_count);
 						variable_type="VOID";
 					}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 290 "parser.y" /* yacc.c:1646  */
    {
						fprintf(tokenout,"Line No : %d declaration_list : declaration_list COMMA ID\n value is %s \n",line_count,(yyvsp[0])->name.c_str());
						(yyvsp[0])=table->insert((yyvsp[0])->name,variable_type,table->tableNo);
						variableList.push_back((yyvsp[0])->address);
						table->print(logout);
						//delete($3);
					}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 299 "parser.y" /* yacc.c:1646  */
    {
 		  		 		fprintf(tokenout,"Line No : %d declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\nvalue is %s \n",line_count,(yyvsp[-3])->name.c_str());
 		  		 		(yyvsp[-3])->aSize=(yyvsp[-1])->iValue;
 		  		 		(yyvsp[-3])=table->insert((yyvsp[-3])->name,variable_type,table->tableNo,(yyvsp[-3])->iValue,(yyvsp[-3])->fValue,(yyvsp[-3])->aSize);
 		  		 		variableList.push_back((yyvsp[-3])->address);
 		  		 		table->print(logout);
 		  		 		//delete($5);
 		  		 		//delete($3);
 		  		 	}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 310 "parser.y" /* yacc.c:1646  */
    {
 		  		 		fprintf(tokenout,"Line No :  %d declaration_list : ID \nvalue is %s \n",line_count,(yyvsp[0])->name.c_str());
 		  		 		(yyvsp[0])=table->insert((yyvsp[0])->name,variable_type,table->tableNo);
 		  		 		variableList.push_back((yyvsp[0])->address);
 		  		 		table->print(logout);
 		  		 		//delete($1);
 		  		 	}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 319 "parser.y" /* yacc.c:1646  */
    {
 		         		fprintf(tokenout,"Line No:  %d declaration_list : ID LTHIRD CONST_INT RTHIRD \nvalue is %s \n",line_count,(yyvsp[-3])->name.c_str());
 		         		(yyvsp[-3])->aSize=(yyvsp[-1])->iValue;

 		  		 		printf("size is %d\n",(yyvsp[-3])->aSize);
 		         		(yyvsp[-3])=table->insert((yyvsp[-3])->name,variable_type,table->tableNo,(yyvsp[-3])->iValue,(yyvsp[-3])->fValue,(yyvsp[-3])->aSize);
 		         		variableList.push_back((yyvsp[-3])->address);
 		         		table->print(logout);
 		         		//delete($3);
 		         		//delete($1);
 		         	}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 333 "parser.y" /* yacc.c:1646  */
    {
					fprintf(tokenout,"Line No:  %d statements : statement\n",line_count);
					(yyval)=(yyvsp[0]);
				}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 339 "parser.y" /* yacc.c:1646  */
    {
	   	   			fprintf(tokenout,"Line No : %d statements : statements statement\n",line_count);
	   	   			(yyval)=(yyvsp[-1]);
	   	   			(yyval)->code=(yyvsp[-1])->code+(yyvsp[0])->code;
	   	   			delete (yyvsp[0]);
	   	   		}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 348 "parser.y" /* yacc.c:1646  */
    {
					fprintf(tokenout,"Line No : %d statement : var_declaration \n",line_count);
					//add variable to global array;
					(yyval)=(yyvsp[0]);
				}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 355 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No : %d statement : expression_statement \n",line_count);
	  	  			(yyval)=(yyvsp[0]);
	  	  		}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 361 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No : %d statement : compound_statement \n",line_count);
	  	  			(yyval)=(yyvsp[0]);
	  	  		}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 367 "parser.y" /* yacc.c:1646  */
    {
	   	  			fprintf(tokenout,"Line No : %d statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement \n",line_count);
	   	  			(yyval)=(yyvsp[-4]);
	   	  			char *labelFOR=newLabel();
	   	  			char *labelEND=newLabel();
	   	  			(yyval)->code+=string(labelFOR)+":\n";
	   	  			(yyval)->code+=(yyvsp[-3])->code;
	   	  			(yyval)->code+="CMP "+(yyvsp[-3])->name+",0\n";
	   	  			(yyval)->code+="JE "+string(labelEND)+"\n";
	   	  			(yyval)->code+=(yyvsp[0])->code;
	   	  			(yyval)->code+=(yyvsp[-2])->code;
	   	  			(yyval)->code+="JMP "+string(labelFOR)+"\n";
	   	  			(yyval)->code+=string(labelEND)+":\n";
	   	  			(yyval)->name="for";
	   	  		}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 384 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No : %d statement : IF LPAREN expression RPAREN statement LOWER_THAN_ELSE \n",line_count);
	  	  			(yyval)=(yyvsp[-2]);
	  	  			label=newLabel();
	  	  			(yyval)->code+="MOV AX, "+(yyvsp[-2])->name+"\n";
	  	  			(yyval)->code+="CMP AX, 0\n";
	  	  			(yyval)->code+="JE "+string(label)+"\n";
	  	  			(yyval)->code+=(yyvsp[0])->code;
	  	  			(yyval)->code+=string(label)+":	\n";
	  	  			(yyval)->name="IF";
	  	  		}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 397 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No  : %d statement : IF LPAREN expression RPAREN statement ELSE statement fuck \n",line_count);
	  	  			(yyval)=(yyvsp[-4]);
	  	  			char *labelIf = newLabel();
	  	  			char *labelElse = newLabel();
	  	  			(yyval)->code+="MOV AX, "+(yyvsp[-4])->name+"\n";
	  	  			(yyval)->code+="CMP AX, 0\n";
	  	  			(yyval)->code+="JE "+string(labelElse)+ "\n";
	  	  			(yyval)->code+=(yyvsp[-2])->code;
	  	  			(yyval)->code+="JMP "+string(labelIf)+"\n";
	  	  			(yyval)->code+=string(labelElse)+": \n";
	  	  			(yyval)->code+=(yyvsp[0])->code;
	  	  			(yyval)->code+=string(labelIf)+": \n";
	  	  			(yyval)->name="IF_ELSE";
	  	  		}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 414 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No : %d statement : WHILE LPAREN expression RPAREN statement \n",line_count);
	  	  			(yyval)=new symbolInfo();
	  	  			char *labelWHILE=newLabel();
	  	  			char *labelEND=newLabel();
	  	  			(yyval)->code+=""+string(labelWHILE)+":\n";
	  	  			(yyval)->code+=(yyvsp[-2])->code;
	  	  			(yyval)->code+="CMP "+(yyvsp[-2])->name+",0\n";
	  	  			(yyval)->code+="JE "+string(labelEND)+"\n";
	  	  			(yyval)->code+=(yyvsp[0])->code;
	  	  			(yyval)->code+="JMP "+string(labelWHILE)+"\n";
	  	  			(yyval)->code+=string(labelEND)+":\n";
	  	  		}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 428 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No : %d statement : PRINTLN LPAREN ID RPAREN SEMICOLON statement \n",line_count);
	  	  			(yyval)=new symbolInfo("println","nonterminal");
	  	  		}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 433 "parser.y" /* yacc.c:1646  */
    {
	  	  			fprintf(tokenout,"Line No : %d statement : RETURN expression SEMICOLON \n",line_count);
	  	  			(yyval)=(yyvsp[-2]);
	  	  		}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 441 "parser.y" /* yacc.c:1646  */
    {
							fprintf(tokenout,"Line no : %d expression_statement:SEMICOLON\n",line_count);
							(yyval)=new symbolInfo(";","SEMICOLON");
							(yyval)->code="";
						}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 447 "parser.y" /* yacc.c:1646  */
    {
					 		fprintf(tokenout,"Line no : %d expression_statement:expression SEMICOLON\n",line_count);
					 		(yyval)=new symbolInfo((yyvsp[-1]));
					 	}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 454 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[0]));
				fprintf(tokenout,"Line no : %d variable : ID\n",line_count);
			}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 460 "parser.y" /* yacc.c:1646  */
    {
	 	 		(yyval)=new symbolInfo((yyvsp[-3]));
	 	 		(yyval)->code=(yyvsp[-1])->code+"MOV BX, "+(yyvsp[-1])->name+"\nADD BX, BX\n";
	 	 		if((yyvsp[-1])->iValue<(yyval)->aSize&&(yyvsp[-1])->iValue>=0)
	 	 			{
	 	 				(yyval)->index=(yyvsp[-1])->iValue;
	 	 				(yyval)->iValue=(yyval)->iara[(yyvsp[-1])->iValue];
	 	 			}
	 	 		else
	 	 			yyerror("array index out of bound\n");
	 	 		fprintf(tokenout,"Line no : %d variable: ID LTHIRD expression RTHIRD \n",line_count);
	 	 		delete (yyvsp[-1]);
	 	 	}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 476 "parser.y" /* yacc.c:1646  */
    {
					(yyval)=new symbolInfo((yyvsp[0]));
					fprintf(tokenout,"Line no : %d expression : logic_expression\n",line_count);
				}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 482 "parser.y" /* yacc.c:1646  */
    {
	   				fprintf(tokenout,"Line no : %d expression : variable ASSIGNOP logic_expression \n",line_count);
	   				(yyval)=(yyvsp[-2]);
	   				(yyval)->code=(yyvsp[0])->code+(yyvsp[-2])->code;
	   				(yyval)->code+="MOV AX, "+(yyvsp[0])->name+"\n";
	   				if((yyval)->aSize==0)
	   				{
	   					(yyval)->code+="MOV "+(yyvsp[-2])->name+",AX\n";
	   				}
	   				else
	   				{
	   					(yyval)->code+="MOV "+(yyvsp[-2])->name+"[BX],AX\n";
	   				}
	   				delete (yyvsp[0]);
	   			}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 500 "parser.y" /* yacc.c:1646  */
    {
						(yyval)=new symbolInfo((yyvsp[0]));
						if((yyvsp[0])->iValue!=0)
							(yyval)->iValue=(yyvsp[0])->iValue;
						else
							(yyval)->iValue=0;
						fprintf(tokenout,"Line no : %d logic_expression : rel_expression \n",line_count);
					}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 510 "parser.y" /* yacc.c:1646  */
    {
		 		 		(yyval)=new symbolInfo((yyvsp[-2]));
		 		 		(yyval)->code+=(yyvsp[0])->code;

		 		 		char *te=newTemp();
		 		 		char *fal=newLabel();
		 		 		char *tr=newLabel();
		 		 		if((yyvsp[-1])->name=="&&")
		 		 		{
		 		 			(yyval)->code+="CMP "+(yyvsp[-2])->name+",1\n";
		 		 			(yyval)->code+="JNE "+string(fal)+"\n";
		 		 			(yyval)->code+="CMP "+(yyvsp[0])->name+",1\n";
		 		 			(yyval)->code+="JNE "+string(fal)+"\n";
		 		 			(yyval)->code+="MOV "+string(te)+",1\n";
		 		 			(yyval)->code+="JMP "+string(tr) +"\n";
		 		 			(yyval)->code+=string(fal)+":\n";
		 		 			(yyval)->code+="MOV "+string(te)+",0\n";
		 		 			(yyval)->code+=string(tr)+":\n";
		 		 		}
		 		 		else
		 		 		{
		 		 			(yyval)->code+="CMP "+(yyvsp[-2])->name+",1\n";
		 		 			(yyval)->code+="JE "+string(tr) +"\n";
		 		 			(yyval)->code+="CMP "+(yyvsp[0])->name+",1\n";
		 		 			(yyval)->code+="JE "+string(tr) +"\n";
		 		 			(yyval)->code+="MOV "+string(te)+",0\n";
		 		 			(yyval)->code+="JMP "+string(fal) +"\n";
		 		 			(yyval)->code+=string(tr)+":\n";
		 		 			(yyval)->code+="MOV "+string(te)+",1\n";
		 		 			(yyval)->code+=string(fal)+":\n";

		 		 		}
		 		 		(yyval)->name=string(te);
		 		 		fprintf(tokenout,"Line no : %d logic_expression : rel_expression LOGICOP rel_expression \n",line_count);
		 		 		delete (yyvsp[0]);
		 		 	}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 550 "parser.y" /* yacc.c:1646  */
    {
						(yyval)=new symbolInfo((yyvsp[0]));
						fprintf(tokenout,"Line no : %d rel_expression	: simple_expression \n",line_count);
					}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 555 "parser.y" /* yacc.c:1646  */
    {
						(yyval)=new symbolInfo((yyvsp[-2]));
						(yyval)->code+=(yyvsp[0])->code;
						(yyval)->code="MOV AX, "+(yyvsp[-2])->name+"\n";
						(yyval)->code+="CMP AX, "+(yyvsp[0])->name+"\n";
						char *te=newTemp();
						char *label1=newLabel();
						char *label2=newLabel();

						if((yyvsp[-1])->name=="<")
		 		 		{
		 		 			(yyval)->code+="JL "+string(label1)+"\n";
		 		 			if((yyvsp[-2])->iValue<(yyvsp[0])->iValue)
		 		 				(yyval)->iValue=1;
		 		 			else
		 		 				(yyval)->iValue=0;
		 		 		}
		 		 		else if((yyvsp[-1])->name=="<=")
		 		 		{
		 		 			(yyval)->code+="JLE "+string(label1)+"\n";
		 		 		}
		 		 		else if((yyvsp[-1])->name==">")
		 		 		{
		 		 			(yyval)->code+="JG "+string(label1)+"\n";
		 		 		}
		 		 		else if((yyvsp[-1])->name==">=")
		 		 		{
		 		 			(yyval)->code+="JGE "+string(label1)+"\n";
		 		 		}
		 		 		else 
		 		 		{
		 		 			(yyval)->code+="JE "+string(label1)+"\n";
		 		 		}
		 		 		(yyval)->code+="MOV "+string(te)+",0\n";
		 		 		(yyval)->code+="JMP "+string(label2)+"\n";
		 		 		(yyval)->code+=string(label1)+":\nMOV "+string(te)+", 1\n";
		 		 		(yyval)->code+=string(label2)+":\n";
		 		 		(yyval)->name=string(te);
		 		 		delete (yyvsp[0]);
						fprintf(tokenout,"Line no : %d rel_expression	: simple_expression RELOP simple_expression \n",line_count);
					}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 600 "parser.y" /* yacc.c:1646  */
    {

						(yyval)=new symbolInfo((yyvsp[0]));
						fprintf(tokenout,"Line no : %d simple_expression : term\n",line_count);
					}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 607 "parser.y" /* yacc.c:1646  */
    {
		  		  		(yyval)=new symbolInfo((yyvsp[-2]));
		  		  		(yyval)->code+=(yyvsp[0])->code;
		  		  		char *te=newTemp();

		  		  		if((yyvsp[-1])->name=="+")
		  		  		{
		  		  			t=typeMatch((yyvsp[-2]),(yyvsp[0]));
		  		  			if(t=="int")
		  		  			{
		  		  				(yyval)->code+="MOV AX,"+(yyvsp[-2])->name+"\n";
		  		  				(yyval)->code+="MOV BX,"+(yyvsp[0])->name+"\n";
		  		  				(yyval)->code+="ADD AX,BX\n";
		  		  				(yyval)->code+="MOV "+string(te)+",AX\n";

		  		  			}
		  		  			else
		  		  			{
		  		  				yyerror("no floating point operation please\n");
		  		  			}
		  		  		}
		  		  		else 
		  		  		{
		  		  			t=typeMatch((yyvsp[-2]),(yyvsp[0]));
		  		  			if(t=="int")
		  		  			{
		  		  				(yyval)->code+="MOV AX,"+(yyvsp[-2])->name+"\n";
		  		  				(yyval)->code+="MOV BX,"+(yyvsp[0])->name+"\n";
		  		  				(yyval)->code+="SUB AX,BX\n";
		  		  				(yyval)->code+="MOV "+string(te)+",AX\n";

		  		  			}
		  		  			else
		  		  			{
		  		  				yyerror("no floating point operation please\n");
		  		  			}
		  		  		}
		  		  		(yyval)->name=string(te);
		  		  		delete (yyvsp[0]);	
		  		  		fprintf(tokenout,"Line no : %d simple_expression : simple_expression ADDOP term\n",line_count);
		  		  	}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 651 "parser.y" /* yacc.c:1646  */
    {
			(yyval)=new symbolInfo((yyvsp[0]));

			fprintf(tokenout,"Line no : %d term :unary_expression\n",line_count);
		}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 657 "parser.y" /* yacc.c:1646  */
    {
     		(yyval)=new symbolInfo((yyvsp[-2]));
     		(yyval)->code+=(yyvsp[0])->code;
     		(yyval)->code+="MOV AX, "+(yyvsp[-2])->name+"\n";
     		(yyval)->code+="MOV BX, "+(yyvsp[0])->name+"\n";
     		char *t1=newTemp();
     		if((yyvsp[-1])->name=="*")
     		{
     			(yyval)->code+="MUL BX\n";
     			(yyval)->code+="MOV "+string(t1)+" AX\n";
     			//$$->code+="MOV "+string(t1)+"R, AX\n";
     			(yyval)->iValue=(yyvsp[-2])->iValue*(yyvsp[0])->iValue;
     		}
     		else if((yyvsp[-1])->name=="/")
     		{
     			(yyval)->code+="DIV BX\n";
     			(yyval)->code+="MOV "+string(t1)+", AL\n";
     			(yyval)->iValue=(yyvsp[-2])->iValue/(yyvsp[0])->iValue;
     		}
     		else
     		{
     			(yyval)->iValue=(yyvsp[-2])->iValue%(yyvsp[0])->iValue;
     			(yyval)->code+="DIV BX\n";
     			(yyval)->code+="MOV "+string(t1)+", AH\n";
     		}
     		(yyval)->name=string(t1);
     		fprintf(tokenout,"Line no : %d term :term MULOP unary_expression\n",line_count);
     		delete (yyvsp[0]);
     	}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 688 "parser.y" /* yacc.c:1646  */
    {
						fprintf(tokenout,"Line no:%d unary_expression : ADDOP unary_expression \n",line_count);
						(yyval)=new symbolInfo((yyvsp[0]));
						if((yyvsp[-1])->name=="-")
						{
							char *te=newTemp();
							(yyval)->code+="MOV AX, "+(yyvsp[0])->name+"\n";
							(yyval)->code+="NEG AX\n";
							(yyval)->code+="MOV "+string(te)+ ", AX\n";
							(yyval)->name=string(te);
						}
					}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 702 "parser.y" /* yacc.c:1646  */
    {
		 		 		fprintf(tokenout,"Line no : %d unary_expression : NOT unary_expression \n",line_count);
		 		 		(yyval)=new symbolInfo((yyvsp[0]));
		 		 		char *te=newTemp();
		 		 		(yyval)->code="MOV AX, "+(yyvsp[0])->name+"\n";
		 		 		(yyval)->code+="NOT AX\n";
		 		 		(yyval)->code+="MOV "+string(te)+",AX\n";
		 		 		(yyval)->name=string(te);
		 		 	}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 713 "parser.y" /* yacc.c:1646  */
    {
		 		 		(yyval)=new symbolInfo((yyvsp[0]));
		 		 		fprintf(tokenout,"Line no : %d unary_expression : factor \n",line_count);
		 		 	}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 720 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[0]));
				if((yyval)->aSize==0)
				{

				}
				else
				{
					char *te=newTemp();
					(yyval)->code+="MOV AX, "+(yyvsp[0])->name+"[BX]\n";
					(yyval)->code+="MOV "+string(te)+",AX\n";
					(yyval)->name=string(te);
				}				
				fprintf(tokenout,"Line no : %d factor	: variable \n",line_count);
			}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 737 "parser.y" /* yacc.c:1646  */
    {
				if(sTable->lookup_syminfo((yyvsp[-3])->name))
				{
					(yyval)=new symbolInfo((yyvsp[-3]));

				}
				else
				{
					yyerror("function not declared or defined in this scope");
				}	
				fprintf(tokenout,"Line no : %d factor	: ID LPAREN argument_list RPAREN \n",line_count);
			}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 751 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[-1]));
				fprintf(tokenout,"Line no : %d factor	: LPAREN expression RPAREN \n",line_count);
			}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 757 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[0]));
				fprintf(tokenout,"Line no : %d factor	: CONST_INT \n",line_count);
			}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 763 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[0]));
				fprintf(tokenout,"Line no : %d factor	: CONST_FLOAT \n",line_count);
			}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 770 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[-1]));
				char *te=newTemp();
				if((yyval)->aSize>0)
				{
					(yyval)->code+=(yyvsp[-1])->code;
					(yyval)->code+="ADD BX,2\n";
					(yyval)->code+="MOV "+string(te)+","+(yyvsp[-1])->name+"[BX]\n";
				}
				else
					(yyval)->code+="INC "+(yyvsp[-1])->name+"\n";
				(yyval)->name=string(te);
				fprintf(tokenout,"Line no : %d factor	: variable INCOP \n",line_count);
			}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 786 "parser.y" /* yacc.c:1646  */
    {
				(yyval)=new symbolInfo((yyvsp[-1]));
				char *te=newTemp();
				if((yyval)->aSize>0)
				{
					(yyval)->code+=(yyvsp[-1])->code;
					(yyval)->code+="SUB BX,2\n";
					(yyval)->code+="MOV "+string(te)+","+(yyvsp[-1])->name+"[BX]\n";
				}
				else
					(yyval)->code+="DEC "+(yyvsp[-1])->name+"\n";
				(yyval)->name=string(te);
				fprintf(tokenout,"Line no : %d factor	: variable DECOP \n",line_count);
			}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 804 "parser.y" /* yacc.c:1646  */
    {
					(yyval)=new symbolInfo((yyvsp[0]));
					fprintf(tokenout,"Line no : %d argument_list : arguments\n",line_count);
				}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 808 "parser.y" /* yacc.c:1646  */
    {
			  		(yyval)=NULL;
			  		fprintf(tokenout,"Line no : %d argument_list : null\n",line_count);
			    }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 813 "parser.y" /* yacc.c:1646  */
    {
 				symbolInfo* t=(yyvsp[-2]);
				while(t->next)
				{t=t->next;}
				t->next=(yyvsp[0]);
				(yyval)=new symbolInfo((yyvsp[-2]));
 			}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 821 "parser.y" /* yacc.c:1646  */
    {
              	(yyval)=new symbolInfo((yyvsp[0]));
              	fprintf(tokenout,"Line no : %d logic_expression \n",line_count);
            }
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2359 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 825 "parser.y" /* yacc.c:1906  */

int main(int argc,char *argv[])
{

	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		exit(1);
	}

	logout= fopen("log.txt","w");
	temp=fopen("temp.txt","w");
	errorout=fopen("error.txt","w");
	fclose(logout);
	tokenout= fopen("parser.txt","w");
	fclose(tokenout);
	
	logout= fopen("log.txt","a");
	tokenout= fopen("parser.txt","a");
	code = fopen("code.asm","w");


	yyin=fp;
	yyparse();
	

	fclose(temp);
	fclose(errorout);
	fclose(logout);
	fclose(tokenout);
	
	return 0;
}
