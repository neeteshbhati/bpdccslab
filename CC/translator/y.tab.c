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

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
  int var_count = -1;
  char label_buffer[30][30];
  char declaration_buffer[30][30];
  char assign_buffer[30];
  char function_buffer [30][90];
  char logical_buffer[30];
  char compound_buffer[90];
  char numToStr [30];
  char strWithoutQuote [30];
  int label_count = -1;
  int function_count = -1;
  int declaration_count = -1;
  FILE *filePointer;

  struct symbol_table {
    char var_name [30];
    int type;
    int isArray;
  }var_list[20];

	void insert_to_table (char var[30], int type, int isArray);
  int isArray (char var[30]);
  int getType (char var[30]);
  void tostring(char str[], int num);
  void removeQuotes(char str[]);

#line 101 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
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
    PROC = 258,
    MAIN = 259,
    VAR = 260,
    ARRAY = 261,
    OF = 262,
    READ = 263,
    WRITE = 264,
    GOTO = 265,
    PLUS = 266,
    MINUS = 267,
    MUL = 268,
    DIV = 269,
    MOD = 270,
    LB = 271,
    RB = 272,
    LSB = 273,
    RSB = 274,
    COLN = 275,
    SC = 276,
    COMA = 277,
    EQ = 278,
    AND = 279,
    OR = 280,
    NOT = 281,
    LT = 282,
    GT = 283,
    LTE = 284,
    GTE = 285,
    LEQ = 286,
    NEQ = 287,
    IF = 288,
    THEN = 289,
    ELSE = 290,
    ELSEIF = 291,
    ENDIF = 292,
    WHILE = 293,
    DO = 294,
    ENDWHILE = 295,
    REPEAT = 296,
    UNTIL = 297,
    FOR = 298,
    TO = 299,
    ENDFOR = 300,
    INT = 301,
    CHAR = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VARIABLE = 305,
    NUM = 306,
    LITERAL = 307,
    LABEL = 308
  };
#endif
/* Tokens.  */
#define PROC 258
#define MAIN 259
#define VAR 260
#define ARRAY 261
#define OF 262
#define READ 263
#define WRITE 264
#define GOTO 265
#define PLUS 266
#define MINUS 267
#define MUL 268
#define DIV 269
#define MOD 270
#define LB 271
#define RB 272
#define LSB 273
#define RSB 274
#define COLN 275
#define SC 276
#define COMA 277
#define EQ 278
#define AND 279
#define OR 280
#define NOT 281
#define LT 282
#define GT 283
#define LTE 284
#define GTE 285
#define LEQ 286
#define NEQ 287
#define IF 288
#define THEN 289
#define ELSE 290
#define ELSEIF 291
#define ENDIF 292
#define WHILE 293
#define DO 294
#define ENDWHILE 295
#define REPEAT 296
#define UNTIL 297
#define FOR 298
#define TO 299
#define ENDFOR 300
#define INT 301
#define CHAR 302
#define FLOAT 303
#define DOUBLE 304
#define VARIABLE 305
#define NUM 306
#define LITERAL 307
#define LABEL 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "parser.y" /* yacc.c:355  */

  int number;
	int data_type;
	char var_name[30];
  char text[30];

#line 254 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 271 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    74,    75,    77,    78,    80,    91,    92,
      94,    95,    96,    97,    98,    99,   101,   135,   158,   163,
     169,   173,   177,   181,   186,   200,   216,   217,   219,   233,
     246,   253,   257,   261,   265,   269,   274,   276,   277,   281,
     286,   291,   297,   304,   310,   317,   324,   330,   337,   347,
     362,   379,   383,   387,   391,   395,   399,   404,   405,   409,
     411,   416,   422,   427,   433,   439,   449,   451,   456,   512,
     557,   562,   568,   573,   582
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROC", "MAIN", "VAR", "ARRAY", "OF",
  "READ", "WRITE", "GOTO", "PLUS", "MINUS", "MUL", "DIV", "MOD", "LB",
  "RB", "LSB", "RSB", "COLN", "SC", "COMA", "EQ", "AND", "OR", "NOT", "LT",
  "GT", "LTE", "GTE", "LEQ", "NEQ", "IF", "THEN", "ELSE", "ELSEIF",
  "ENDIF", "WHILE", "DO", "ENDWHILE", "REPEAT", "UNTIL", "FOR", "TO",
  "ENDFOR", "INT", "CHAR", "FLOAT", "DOUBLE", "VARIABLE", "NUM", "LITERAL",
  "LABEL", "$accept", "PROGRAM", "LABEL_BLOCK_LIST", "LABEL_BLOCK",
  "LABEL_HEAD", "BODY", "STATEMENT", "DECLARATION_STATEMENT",
  "VARIABLE_LIST", "DATA_TYPE", "ASSIGNMENT_STATEMENT", "A_EXPN_LIST",
  "A_EXPN", "OP", "CONDITIONAL_STATEMENT", "ELSEIF_LIST", "IF_COND",
  "THEN_COND", "ELSE_COND", "ELSEIF_COND", "CLOG_EXPN", "BCMP",
  "SLOG_EXPN", "BLOG", "ITERATIVE_STATEMENT", "WHILE_COND", "DO_COND",
  "ENDWHILE_COND", "REPEAT_COND", "UNTIL_COND", "FOR_HEADER", "FOR_BODY",
  "ENDFOR_COND", "FUNCTION_STATEMENT", "PRINT_LIST", "PRINT_ITEM",
  "JUMP_STATEMENT", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -112

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      36,    38,    57,    42,  -112,    43,     6,  -112,  -112,     6,
       0,  -112,    11,    46,    47,    14,  -112,  -112,  -112,    49,
       3,  -112,     0,  -112,  -112,  -112,    50,  -112,    51,     0,
      29,  -112,  -112,    48,    52,    11,   -32,    53,    19,    20,
      54,  -112,   -23,   -23,    31,  -112,     0,  -112,    11,    -2,
      58,  -112,  -112,    59,    56,  -112,    55,    60,   -25,    64,
     -15,    66,    24,    67,  -112,    65,    40,  -112,    68,  -112,
    -112,  -112,  -112,    69,    70,    71,   -32,    75,    76,    77,
    -112,    72,    17,   -23,  -112,  -112,  -112,  -112,  -112,  -112,
       5,    63,  -112,  -112,   -23,    29,   -23,  -112,  -112,    37,
    -112,  -112,  -112,  -112,    61,    62,    73,  -112,  -112,  -112,
    -112,  -112,  -112,   -25,    82,  -112,  -112,  -112,     0,  -112,
       0,    83,    84,    45,    85,    86,  -112,  -112,    16,    74,
    -112,    89,    78,    81,    90,  -112,  -112,  -112,  -112,     0,
      93,  -112,  -112,    79,    94,    87,    80,    88,   -23,    96,
    -112,   -25,    97,  -112,   101,    95,    98,  -112,    63,   -12,
    -112,     0,    99,    16,  -112,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     7,     2,     4,
       6,     3,     0,     0,     0,     0,    40,    60,    63,     0,
       0,     5,     9,    10,    11,    12,     0,    13,     0,     0,
       0,    14,    15,    19,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,    61,     0,    59,     0,     0,
       0,    73,    72,     0,    71,    74,     0,     0,     0,     0,
       0,     0,    45,     0,    64,     0,     0,    18,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    29,
      30,     0,    27,     0,    54,    53,    52,    51,    56,    55,
       0,     0,    46,    47,     0,     0,     0,    67,    66,     0,
      16,    68,    69,    70,     0,     0,     0,    25,    31,    32,
      33,    34,    35,     0,     0,    49,    50,    41,     0,    44,
       0,     0,     0,     0,     0,     0,    26,    48,     0,     0,
      58,     0,     0,     0,     0,    42,    43,    39,    36,     0,
       0,    62,    57,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,    38,     0,     0,     0,    28,     0,     0,
      24,     0,     0,     0,    17,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -112,  -112,   112,  -112,  -112,   -22,  -112,  -112,   -29,   -37,
    -112,  -111,  -112,  -112,  -112,   -40,  -112,   -31,  -112,  -112,
     -42,  -112,   -72,  -112,  -112,  -112,    33,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,    91,  -112,  -112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    21,    22,    23,    34,    73,
      24,    81,    82,   113,    25,   138,    26,   118,   139,   140,
      61,    94,    62,    90,    27,    28,    46,   142,    29,    65,
      30,    47,    98,    31,    53,    54,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    63,   126,    59,    68,    12,    50,    44,    13,    14,
      15,   114,    84,    85,    86,    87,    88,    89,    51,    67,
      52,    39,   119,    40,    66,    79,    80,    60,   108,   109,
     110,   111,   112,    16,    69,    70,    71,    72,    17,     1,
     156,    18,     3,    19,    69,    70,    71,    72,    92,    93,
      20,   135,   136,   137,   121,   115,   116,     4,     5,     7,
       6,    33,    35,    36,    37,    38,    42,    43,    45,    56,
      48,    57,    49,    64,    55,    74,    75,    58,    76,    78,
      83,    96,    77,    91,    95,    97,    99,   104,   122,   132,
     100,   101,   102,   107,   105,   106,   128,   117,   129,   127,
     130,   145,   159,   131,   133,   134,   154,   143,   146,   148,
     151,   150,   123,   124,   141,   155,   157,   147,   158,   160,
     164,    11,   162,   165,   125,   153,     0,   161,   120,   144,
     149,   152,     0,     0,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103
};

static const yytype_int16 yycheck[] =
{
      22,    43,   113,    26,     6,     5,    35,    29,     8,     9,
      10,    83,    27,    28,    29,    30,    31,    32,    50,    48,
      52,    18,    94,    20,    46,    50,    51,    50,    11,    12,
      13,    14,    15,    33,    46,    47,    48,    49,    38,     3,
     151,    41,     4,    43,    46,    47,    48,    49,    24,    25,
      50,    35,    36,    37,    96,    50,    51,     0,    16,    53,
      17,    50,    16,    16,    50,    16,    16,    16,    39,    50,
      22,    51,    20,    42,    21,    17,    17,    23,    22,    19,
      16,    16,    27,    17,    17,    45,    18,    12,    51,    44,
      21,    21,    21,    21,    18,    18,   118,    34,   120,    17,
      17,    20,     7,    19,    19,    19,   148,    18,    18,    16,
      23,    17,    51,    51,    40,    19,    19,   139,    17,    21,
      21,     9,   159,   163,    51,    37,    -1,   158,    95,    51,
      51,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    55,     4,     0,    16,    17,    53,    56,    57,
      58,    56,     5,     8,     9,    10,    33,    38,    41,    43,
      50,    59,    60,    61,    64,    68,    70,    78,    79,    82,
      84,    87,    90,    50,    62,    16,    16,    50,    16,    18,
      20,    59,    16,    16,    59,    39,    80,    85,    22,    20,
      62,    50,    52,    88,    89,    21,    50,    51,    23,    26,
      50,    74,    76,    74,    42,    83,    59,    62,     6,    46,
      47,    48,    49,    63,    17,    17,    22,    27,    19,    50,
      51,    65,    66,    16,    27,    28,    29,    30,    31,    32,
      77,    17,    24,    25,    75,    17,    16,    45,    86,    18,
      21,    21,    21,    88,    12,    18,    18,    21,    11,    12,
      13,    14,    15,    67,    76,    50,    51,    34,    71,    76,
      80,    74,    51,    51,    51,    51,    65,    17,    59,    59,
      17,    19,    44,    19,    19,    35,    36,    37,    69,    72,
      73,    40,    81,    18,    51,    20,    18,    59,    16,    51,
      17,    23,    51,    37,    74,    19,    65,    19,    17,     7,
      21,    71,    63,    59,    21,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      66,    67,    67,    67,    67,    67,    68,    69,    69,    69,
      70,    71,    72,    73,    74,    74,    75,    75,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    87,
      88,    88,    89,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     5,    13,     3,     1,
       1,     1,     1,     1,    11,     5,     3,     1,     7,     1,
       1,     1,     1,     1,     1,     1,     7,     7,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     4,     3,
       3,     1,     1,     1,     1,     1,     1,     7,     6,     2,
       1,     1,     1,     1,     1,     9,     3,     1,     5,     5,
       3,     1,     1,     1,     3
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
#line 67 "parser.y" /* yacc.c:1646  */
    {
            if(strcmp(label_buffer[0],"Begin:") != 0 || strcmp(label_buffer[label_count],"End:") != 0)
            {
              yyerror("syntax error");
            }
          }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "parser.y" /* yacc.c:1646  */
    {
               label_count++;
               strcpy(label_buffer[label_count],(yyvsp[0].text));

               if(strcmp((yyvsp[0].text),"Begin:") != 0 && strcmp((yyvsp[0].text),"End:") != 0)
               {
                 fprintf(filePointer,"%s\n",(yyvsp[0].text));
               }                
             }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "parser.y" /* yacc.c:1646  */
    {
                          switch((yyvsp[-1].data_type))
                          {
                            case 1: fprintf(filePointer,"int "); break;
                            case 2: fprintf(filePointer,"char "); break;
                            case 3: fprintf(filePointer,"float "); break;
                            case 4: fprintf(filePointer,"double "); break;
                          }

                          for (int i=declaration_count; i >= 0; i--)
                          {
                            if (i == declaration_count)
                            {
                              fprintf(filePointer,"%s",declaration_buffer[i]);
                              insert_to_table(declaration_buffer[i],(yyvsp[-1].data_type),0);
                            }
                            else
                            {
                              fprintf(filePointer,", %s",declaration_buffer[i]);
                              insert_to_table(declaration_buffer[i],(yyvsp[-1].data_type),0);
                            }
                          }

                          fprintf(filePointer,";\n");                          
                          
                          for (int i=declaration_count; i >= 0; i--)
                          {
                            strcpy(declaration_buffer[i],"\0");
                          }
                          
                          declaration_count = -1;
                          
                        }
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 136 "parser.y" /* yacc.c:1646  */
    { 
                          if(declaration_count > 0)
                            yyerror("syntax error\n");

                          insert_to_table(declaration_buffer[declaration_count],(yyvsp[-1].data_type),1);

                          switch((yyvsp[-1].data_type))
                          {
                            case 1: fprintf(filePointer,"int %s [%d][%d];\n",declaration_buffer[declaration_count],(yyvsp[-7].number),(yyvsp[-4].number)); break;
                            case 2: fprintf(filePointer,"char %s [%d][%d];\n",declaration_buffer[declaration_count],(yyvsp[-7].number),(yyvsp[-4].number)); break;
                            case 3: fprintf(filePointer,"float %s [%d][%d];\n",declaration_buffer[declaration_count],(yyvsp[-7].number),(yyvsp[-4].number)); break;
                            case 4: fprintf(filePointer,"double %s [%d][%d];\n",declaration_buffer[declaration_count],(yyvsp[-7].number),(yyvsp[-4].number)); break;
                          }

                          for (int i=declaration_count; i >= 0; i--)
                          {
                            strcpy(declaration_buffer[i],"\0");
                          }
                          
                          declaration_count = -1;
                        }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 159 "parser.y" /* yacc.c:1646  */
    {
                  declaration_count++;
                  strcpy(declaration_buffer[declaration_count],(yyvsp[-2].var_name));
                }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 164 "parser.y" /* yacc.c:1646  */
    {
                  declaration_count++;
                  strcpy(declaration_buffer[declaration_count],(yyvsp[0].var_name));                  
                }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 170 "parser.y" /* yacc.c:1646  */
    {
			        (yyval.data_type)=(yyvsp[0].data_type);
		        }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 174 "parser.y" /* yacc.c:1646  */
    {
              (yyval.data_type)=(yyvsp[0].data_type);
            }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 178 "parser.y" /* yacc.c:1646  */
    {
              (yyval.data_type)=(yyvsp[0].data_type);
            }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 182 "parser.y" /* yacc.c:1646  */
    {
              (yyval.data_type)=(yyvsp[0].data_type);
            }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "parser.y" /* yacc.c:1646  */
    {
                         if (getType((yyvsp[-10].var_name)) == 0)
                         {
                           yyerror("variable undeclared\n");
                         }
                         if (isArray((yyvsp[-10].var_name)) == 0)
                         {
                           yyerror("variable is not array type\n");
                         }                         
                         fprintf(filePointer,"%s[%d][%d] = %s",(yyvsp[-10].var_name),(yyvsp[-8].number),(yyvsp[-5].number),assign_buffer);
                         fprintf(filePointer,";\n");
                         strcpy(assign_buffer,"\0");
                       }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 201 "parser.y" /* yacc.c:1646  */
    {
                         
                         if (getType((yyvsp[-4].var_name)) == 0)
                         {
                           yyerror("variable undeclared\n");
                         }
                         if (isArray((yyvsp[-4].var_name)) == 1)
                         {
                           yyerror("array reference without index\n");
                         }
                         fprintf(filePointer,"%s = %s",(yyvsp[-4].var_name),assign_buffer);
                         fprintf(filePointer,";\n");
                         strcpy(assign_buffer,"\0");
                       }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 220 "parser.y" /* yacc.c:1646  */
    {
           if (getType((yyvsp[-6].var_name)) == 0)
           {
             yyerror("variable undeclared\n");
           }
           if (isArray((yyvsp[-6].var_name)) == 0)
           {
             yyerror("variable is not array type\n");
           }
           char temp [100];
           sprintf(temp,"%s[%d][%d] ",(yyvsp[-6].var_name),(yyvsp[-4].number),(yyvsp[-1].number));
           strcat(assign_buffer,temp);
         }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 234 "parser.y" /* yacc.c:1646  */
    {
           if (getType((yyvsp[0].var_name)) == 0)
           {
             yyerror("variable undeclared\n");
           }
           if (isArray((yyvsp[0].var_name)) == 1)
           {
             yyerror("array reference without index\n");
           }
           strcat(assign_buffer,(yyvsp[0].var_name));
           strcat(assign_buffer," ");
         }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 247 "parser.y" /* yacc.c:1646  */
    {
           tostring(numToStr,(yyvsp[0].number));
           strcat(assign_buffer,numToStr);
           strcat(assign_buffer," ");
         }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 254 "parser.y" /* yacc.c:1646  */
    {
       strcat(assign_buffer,"+ ");
     }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 258 "parser.y" /* yacc.c:1646  */
    {
       strcat(assign_buffer,"- ");
     }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 262 "parser.y" /* yacc.c:1646  */
    {
       strcat(assign_buffer,"* ");
     }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 266 "parser.y" /* yacc.c:1646  */
    {
       strcat(assign_buffer,"/ ");
     }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 270 "parser.y" /* yacc.c:1646  */
    {
       strcat(assign_buffer,"%% ");
     }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 278 "parser.y" /* yacc.c:1646  */
    {
                fprintf(filePointer,"}\n");
              }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 282 "parser.y" /* yacc.c:1646  */
    {
                fprintf(filePointer,"}\n");
              }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 287 "parser.y" /* yacc.c:1646  */
    {
            fprintf(filePointer,"if ");
          }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 292 "parser.y" /* yacc.c:1646  */
    {
              fprintf(filePointer,"\n");
              fprintf(filePointer,"{\n");
            }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 298 "parser.y" /* yacc.c:1646  */
    {
              fprintf(filePointer,"}\n");
              fprintf(filePointer,"else\n");
              fprintf(filePointer,"{\n");
            }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 305 "parser.y" /* yacc.c:1646  */
    {
                fprintf(filePointer,"}\n");
                fprintf(filePointer,"else if ");
              }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 311 "parser.y" /* yacc.c:1646  */
    {
              strcat(compound_buffer,logical_buffer);
              fprintf(filePointer,"(%s)",compound_buffer);
              //fprintf(filePointer,"{\n");
              strcpy(logical_buffer,"\0");
            }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 318 "parser.y" /* yacc.c:1646  */
    {
              fprintf(filePointer,"(%s)",logical_buffer);
              //fprintf(filePointer,"{\n");
              strcpy(logical_buffer,"\0");
            }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 325 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer," && ");
         strcpy(compound_buffer,logical_buffer);
         strcpy(logical_buffer,"\0");
       }
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer," || ");
         strcpy(compound_buffer,logical_buffer);
         strcpy(logical_buffer,"\0");
       }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 338 "parser.y" /* yacc.c:1646  */
    {
              char temp[50];
              strcpy(temp,logical_buffer);
              strcpy(logical_buffer,"\0");
              strcat(logical_buffer,"!");
              strcat(logical_buffer,"(");
              strcat(logical_buffer,temp);
              strcat(logical_buffer,")");
            }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 348 "parser.y" /* yacc.c:1646  */
    {
              if (getType((yyvsp[-2].var_name)) == 0 || getType((yyvsp[0].var_name)) == 0)
              {
                yyerror("variable undeclared\n");
              }

              char temp [50];
              strcpy(temp,logical_buffer);
              strcpy(logical_buffer,"\0");
              strcat(logical_buffer,(yyvsp[-2].var_name));
              strcat(logical_buffer," ");
              strcat(logical_buffer,temp);
              strcat(logical_buffer,(yyvsp[0].var_name));
            }
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 363 "parser.y" /* yacc.c:1646  */
    {
              if (getType((yyvsp[-2].var_name)) == 0)
              {
                yyerror("variable undeclared\n");
              }
              
              char temp [50];
              strcpy(temp,logical_buffer);
              strcpy(logical_buffer,"\0");
              strcat(logical_buffer,(yyvsp[-2].var_name));
              strcat(logical_buffer," ");
              strcat(logical_buffer,temp);
              tostring(numToStr,(yyvsp[0].number));
              strcat(logical_buffer,numToStr);
            }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 380 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer,">= ");
       }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 384 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer,"<= ");
       }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 388 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer,"> ");
       }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 392 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer,"< ");
       }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 396 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer,"!= ");
       }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 400 "parser.y" /* yacc.c:1646  */
    {
         strcat(logical_buffer,"== ");
       }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 406 "parser.y" /* yacc.c:1646  */
    {
                        fprintf(filePointer,";\n");
                      }
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 412 "parser.y" /* yacc.c:1646  */
    {
               fprintf(filePointer,"while ");
             }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 417 "parser.y" /* yacc.c:1646  */
    {
            fprintf(filePointer,"\n");
            fprintf(filePointer,"{\n");
          }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 423 "parser.y" /* yacc.c:1646  */
    {
                  fprintf(filePointer,"}\n");
                }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 428 "parser.y" /* yacc.c:1646  */
    {
                fprintf(filePointer,"Do\n");
                fprintf(filePointer,"{\n");
              }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 434 "parser.y" /* yacc.c:1646  */
    {
               fprintf(filePointer,"}\n");
               fprintf(filePointer,"while ");
             }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 440 "parser.y" /* yacc.c:1646  */
    {
              if (getType((yyvsp[-6].var_name)) == 0)
              {
                yyerror("variable undeclared\n");
              }

              fprintf(filePointer,"for (%s = %d; %s <= %d; %s++;)",(yyvsp[-6].var_name),(yyvsp[-3].number),(yyvsp[-6].var_name),(yyvsp[-1].number),(yyvsp[-6].var_name));
            }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 452 "parser.y" /* yacc.c:1646  */
    {
                fprintf(filePointer,"}\n");
              }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 457 "parser.y" /* yacc.c:1646  */
    {
                       fprintf(filePointer,"scanf(\"");

                       int temp = declaration_count;
                       
                       for (int i=temp; i >= 0; i--)
                       {
                         if (i == temp)
                         {
                           switch(getType(declaration_buffer[i]))
                           {
                             case 0 : yyerror("variable undeclared\n"); break;
                             case 1 : fprintf(filePointer,"%%d"); break;
                             case 2 : fprintf(filePointer,"%%c"); break;
                             case 3 : fprintf(filePointer,"%%f"); break;
                             case 4 : fprintf(filePointer,"%%lf"); break;
                           }
                         }
                         else
                         {                           
                           switch(getType(declaration_buffer[i]))
                           {
                             case 0 : yyerror("variable undeclared\n"); break;
                             case 1 : fprintf(filePointer," %%d"); break;
                             case 2 : fprintf(filePointer," %%c"); break;
                             case 3 : fprintf(filePointer," %%f"); break;
                             case 4 : fprintf(filePointer," %%lf"); break;
                           }
                         }                        
                       }

                       fprintf(filePointer,"\",");
                       temp = declaration_count;

                       for (int i=temp; i >= 0; i--)
                       {
                         if (i == temp)
                         {
                           fprintf(filePointer,"&%s",declaration_buffer[i]);
                         }
                         else
                         {
                           fprintf(filePointer,", &%s",declaration_buffer[i]);
                         }
                       }

                       fprintf(filePointer,");\n");

                       for (int i=declaration_count; i >= 0; i--)
                       {
                         strcpy(declaration_buffer[i],"\0");
                       }
                      
                       declaration_count = -1;
                     }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 513 "parser.y" /* yacc.c:1646  */
    {
                       fprintf(filePointer,"printf(\"");
                       int temp = function_count;

                       int counter = 0;

                       for (int i=temp; i >= 0; i--)
                       {
                         switch(getType(function_buffer[i]))
                         {
                           case 0 : fprintf(filePointer,"%s ",function_buffer[i]); break;
                           case 1 : fprintf(filePointer,"%%d "); counter++; break;
                           case 2 : fprintf(filePointer,"%%c "); counter++; break;
                           case 3 : fprintf(filePointer,"%%f "); counter++; break;
                           case 4 : fprintf(filePointer,"%%lf "); counter++; break;
                         }
                       }

                       if (counter == 0)
                       {
                         fprintf(filePointer,"\");\n");
                       }
                       else
                       {
                          fprintf(filePointer,"\"");
                          temp = function_count;
                          for (int i=temp; i>=0; i--)
                          {
                            if(getType(function_buffer[i]) != 0)
                            {
                              fprintf(filePointer,", %s",function_buffer[i]);
                            }
                          }
                          fprintf(filePointer,");\n");
                       }
                       
                       for (int i=function_count; i >= 0; i--)
                       {
                         strcpy(function_buffer[i],"\0");
                       }
                       
                       function_count = -1;
                     }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 558 "parser.y" /* yacc.c:1646  */
    {
               function_count++;
               strcpy(function_buffer[function_count],(yyvsp[-2].text));
             }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 563 "parser.y" /* yacc.c:1646  */
    {
               function_count++;
               strcpy(function_buffer[function_count],(yyvsp[0].text));
             }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 569 "parser.y" /* yacc.c:1646  */
    {
               removeQuotes((yyvsp[0].text));
               strcpy((yyval.text),strWithoutQuote);
             }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 574 "parser.y" /* yacc.c:1646  */
    {
               if (getType((yyvsp[0].var_name)) == 0)
               {
                 yyerror("variable undeclared\n");
               }
               strcpy((yyval.text),(yyvsp[0].var_name));
             }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 583 "parser.y" /* yacc.c:1646  */
    {
                  fprintf(filePointer,"goto %s;\n",(yyvsp[-1].var_name));

                  for (int i=declaration_count; i >= 0; i--)
                  {
                    strcpy(declaration_buffer[i],"\0");
                  }
                  
                  declaration_count = -1;
                }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2153 "y.tab.c" /* yacc.c:1646  */
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
#line 594 "parser.y" /* yacc.c:1906  */


void insert_to_table (char var[30], int type, int isArray)
{
  var_count++;
  strcpy(var_list[var_count].var_name,var);
  var_list[var_count].type = type;
  var_list[var_count].isArray = isArray;
}

int getType (char var[30])
{
  for (int i=0; i <= var_count; i++)
  {
    if (strcmp(var_list[i].var_name,var) == 0)
      return var_list[i].type;
  }

  return 0;
}

int isArray (char var[30])
{
  for (int i=0; i<=var_count; i++)
  {
    if(strcmp(var_list[i].var_name,var) == 0)
    {
      return var_list[i].isArray;
    }
  }
  
  return 0;
}

void tostring(char str [], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

void removeQuotes(char str[]) { 

	int c = '"';
	int j, n = strlen(str); 
	for (int i=j=0; i<n; i++) 
	if (str[i] != c) 
		str[j++] = str[i]; 
	
	str[j] = '\0';

  for(int k=0;k<=j;k++)
	    strWithoutQuote[k]=str[k];
} 

int main() 
{
    filePointer = fopen("output.c", "w+");
    fprintf(filePointer,"#include <stdio.h>\nint main()\n{\n");

    yyparse();

    if (success)
    {
      fprintf(filePointer,"}\n");
      fclose(filePointer);
      printf("Translation Successful\n");
    }
     
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
  fclose(filePointer);  
	exit(0);
}
