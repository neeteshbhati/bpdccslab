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
#line 1 "project.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
  char text [30];
	int expn_type=-1;
	int temp;

  struct symbol_table {
    char var_name [30];
    int type;
    int isArray;
  };

  struct node {
    struct symbol_table var_list [20];
    struct node *prev;    
  };

  struct node* head = NULL;

  extern void create_new_table ();
  extern void delete_table ();
	extern int lookup_in_table (char var[30]);
	extern void insert_to_table (char var[30], int type, int isArray);
  extern int hash (char var[30]);
  int isArray (char var[30]);

#line 100 "y.tab.c" /* yacc.c:339  */

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
    HEADER = 258,
    MAIN = 259,
    VAR = 260,
    NUM = 261,
    SCANF = 262,
    PRINTF = 263,
    AND = 264,
    LB = 265,
    RB = 266,
    LCB = 267,
    RCB = 268,
    LSB = 269,
    RSB = 270,
    SC = 271,
    COMA = 272,
    QUES = 273,
    COLN = 274,
    QUOTE = 275,
    EQ = 276,
    PLUS = 277,
    MINUS = 278,
    MUL = 279,
    DIV = 280,
    EXP = 281,
    UPLUS = 282,
    UMINUS = 283,
    MOD = 284,
    LT = 285,
    GT = 286,
    LTE = 287,
    GTE = 288,
    NEQ = 289,
    LEQ = 290,
    LAND = 291,
    LOR = 292,
    NOT = 293,
    IF = 294,
    ELSE = 295,
    WHILE = 296,
    DO = 297,
    FOR = 298,
    INT = 299,
    CHAR = 300,
    FLOAT = 301,
    DOUBLE = 302,
    LITERAL = 303
  };
#endif
/* Tokens.  */
#define HEADER 258
#define MAIN 259
#define VAR 260
#define NUM 261
#define SCANF 262
#define PRINTF 263
#define AND 264
#define LB 265
#define RB 266
#define LCB 267
#define RCB 268
#define LSB 269
#define RSB 270
#define SC 271
#define COMA 272
#define QUES 273
#define COLN 274
#define QUOTE 275
#define EQ 276
#define PLUS 277
#define MINUS 278
#define MUL 279
#define DIV 280
#define EXP 281
#define UPLUS 282
#define UMINUS 283
#define MOD 284
#define LT 285
#define GT 286
#define LTE 287
#define GTE 288
#define NEQ 289
#define LEQ 290
#define LAND 291
#define LOR 292
#define NOT 293
#define IF 294
#define ELSE 295
#define WHILE 296
#define DO 297
#define FOR 298
#define INT 299
#define CHAR 300
#define FLOAT 301
#define DOUBLE 302
#define LITERAL 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "project.y" /* yacc.c:355  */

	int data_type;
	char var_name[30];
  char text[30];

#line 242 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    72,    73,    75,    76,    78,    82,    84,
      86,    90,    94,    98,   104,   106,   111,   116,   121,   127,
     131,   133,   153,   180,   181,   182,   184,   185,   187,   241,
     242,   263,   320,   374,   375,   434,   436,   441,   442,   443,
     445,   446,   447,   449,   450,   451,   453,   454,   456,   457,
     459,   460,   461,   463,   464,   465,   466,   467,   468,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEADER", "MAIN", "VAR", "NUM", "SCANF",
  "PRINTF", "AND", "LB", "RB", "LCB", "RCB", "LSB", "RSB", "SC", "COMA",
  "QUES", "COLN", "QUOTE", "EQ", "PLUS", "MINUS", "MUL", "DIV", "EXP",
  "UPLUS", "UMINUS", "MOD", "LT", "GT", "LTE", "GTE", "NEQ", "LEQ", "LAND",
  "LOR", "NOT", "IF", "ELSE", "WHILE", "DO", "FOR", "INT", "CHAR", "FLOAT",
  "DOUBLE", "LITERAL", "$accept", "PROGRAM", "HEADERS", "BODY",
  "DECLARATION_STATEMENTS", "DECLARATION_STATEMENT", "VAR_LIST",
  "MAIN_TYPE", "DATA_TYPE", "PROGRAM_STATEMENTS", "PROGRAM_STATEMENT",
  "FUNCTION", "READ", "WRITE", "PLACEHOLDER", "CONDITIONAL", "LOOP",
  "LOOP_BODY", "CLOG_EXPN", "BCMP", "SLOG_EXPN", "BLOG", "A_EXPN", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,     3,     8,   -31,  -113,  -113,  -113,    30,     9,    13,
      42,    21,  -113,  -113,  -113,  -113,    29,    20,    21,    51,
    -113,     2,    54,    64,    15,   119,   134,   133,   136,    21,
      20,  -113,  -113,  -113,  -113,  -113,  -113,    41,    60,   141,
      26,   101,   101,   100,   138,   139,    65,    15,    15,     4,
      20,  -113,  -113,   106,    51,  -113,   140,   142,  -113,    26,
      81,  -113,   135,    -7,  -113,  -113,  -113,  -113,  -113,  -113,
     108,    15,   143,  -113,  -113,    15,   146,   147,  -113,    21,
     149,    15,   144,   145,  -113,   130,   111,    58,  -113,    26,
      26,    26,    26,    26,  -113,  -113,    26,    17,   148,   158,
    -113,  -113,   154,   155,  -113,   156,   157,  -113,   125,   159,
    -113,  -113,    26,   161,   162,  -113,   112,   112,    72,    72,
      72,    72,   160,   165,  -113,    59,  -113,     4,    20,     4,
     163,    26,    99,  -113,  -113,   164,    61,   166,   113,   168,
     170,   171,    15,    66,  -113,  -113,   169,   137,  -113,   172,
     173,   153,   114,  -113,   167,   174,  -113,   175,   176,   178,
     181,   182,   183,  -113,     4,   185,   186,   177,   184,     4,
      20,   188,   187,   189,  -113,  -113,   191,   193,  -113,  -113,
    -113,  -113,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     3,     1,    14,     0,     0,     0,
       0,     0,    15,    16,    17,    18,     0,     0,     8,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      20,    25,    26,    27,    23,    24,     7,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     5,    19,     0,     0,     9,     0,    71,    68,     0,
       0,    36,     0,     0,    56,    55,    54,    53,    57,    58,
       0,     0,     0,    48,    49,     0,     0,     0,    43,    45,
       0,     0,     0,     0,    10,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    65,    66,     0,     0,     0,     0,
      51,    52,     0,     0,    46,     0,     0,    44,     0,     0,
      12,    11,     0,     0,     0,    67,    59,    60,    61,    62,
      64,    63,     0,     0,    35,     0,    50,     0,     0,     0,
       0,     0,     0,    70,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    30,     0,     0,    34,     0,
       0,     0,    38,    40,     0,     0,    31,     0,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    32,     0,     0,    42,    29,
      28,    39,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,   152,    -8,   180,  -113,   120,  -113,  -113,   -12,
     -50,  -113,  -113,  -113,   179,  -113,  -113,  -112,   -46,  -113,
     -42,  -113,   -52
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    78,    17,    18,    38,     7,    19,    79,
      30,    31,    32,    33,    62,    34,    35,    80,    45,    75,
      46,    70,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      81,    76,    77,    16,    98,    29,     1,    87,     5,    21,
      99,    22,    23,     6,    24,   139,    39,   141,    52,     9,
      43,    51,   122,    40,    10,    21,   123,    22,    23,   102,
      24,    57,    58,   104,     8,   109,    59,   116,   117,   118,
     119,   120,    20,    25,   121,    26,    27,    28,    12,    13,
      14,    15,   171,    44,    11,    53,    37,   176,    54,    25,
     132,    26,    27,    28,    41,    12,    13,    14,    15,   115,
     137,   107,   146,   138,    42,   147,    55,   155,   140,   143,
      89,    90,    91,    92,    93,    94,    95,    96,    89,    90,
      91,    92,    93,    94,    95,    96,   154,    88,    93,    94,
      95,    73,    74,    89,    90,    91,    92,    93,    94,    95,
      96,    82,    83,   100,   101,   144,   113,   114,   149,   150,
     177,    89,    90,    91,    92,    93,    94,    95,    96,    47,
      64,    65,    66,    67,    68,    69,    91,    92,    93,    94,
      95,    96,   157,   158,    48,    49,    50,    56,    71,    61,
      72,   112,    97,     4,   162,    85,    86,   105,   106,   110,
     111,   103,   108,   125,   124,   126,   130,   127,   128,   129,
     136,   135,   161,   142,    84,   131,   133,   134,   163,     0,
     145,   151,   148,   152,   153,   156,   164,   159,   160,   167,
     165,   166,   168,   174,   169,   170,   172,   173,    36,     0,
     175,   178,     0,   179,   181,   180,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63
};

static const yytype_int16 yycheck[] =
{
      50,    47,    48,    11,    11,    17,     3,    59,     0,     5,
      17,     7,     8,    44,    10,   127,    14,   129,    30,    10,
       5,    29,     5,    21,    11,     5,     9,     7,     8,    71,
      10,     5,     6,    75,     4,    81,    10,    89,    90,    91,
      92,    93,    13,    39,    96,    41,    42,    43,    44,    45,
      46,    47,   164,    38,    12,    14,     5,   169,    17,    39,
     112,    41,    42,    43,    10,    44,    45,    46,    47,    11,
      11,    79,    11,    14,    10,    14,    16,    11,   128,   131,
      22,    23,    24,    25,    26,    27,    28,    29,    22,    23,
      24,    25,    26,    27,    28,    29,   142,    16,    26,    27,
      28,    36,    37,    22,    23,    24,    25,    26,    27,    28,
      29,     5,     6,     5,     6,    16,     5,     6,     5,     6,
     170,    22,    23,    24,    25,    26,    27,    28,    29,    10,
      30,    31,    32,    33,    34,    35,    24,    25,    26,    27,
      28,    29,     5,     6,    10,    12,    10,     6,    10,    48,
      11,    21,    17,     1,    40,    15,    14,    11,    11,    15,
      15,    18,    13,     5,    16,    11,    41,    12,    12,    12,
       5,    11,    19,    10,    54,    16,    15,    15,    11,    -1,
      16,    13,    16,    13,    13,    16,    12,    15,    15,    11,
      15,    15,    11,    16,    12,    12,    11,    11,    18,    -1,
      16,    13,    -1,    16,    13,    16,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,    51,    51,     0,    44,    56,     4,    10,
      11,    12,    44,    45,    46,    47,    52,    53,    54,    57,
      13,     5,     7,     8,    10,    39,    41,    42,    43,    58,
      59,    60,    61,    62,    64,    65,    53,     5,    55,    14,
      21,    10,    10,     5,    38,    67,    69,    10,    10,    12,
      10,    52,    58,    14,    17,    16,     6,     5,     6,    10,
      71,    48,    63,    63,    30,    31,    32,    33,    34,    35,
      70,    10,    11,    36,    37,    68,    67,    67,    52,    58,
      66,    59,     5,     6,    55,    15,    14,    71,    16,    22,
      23,    24,    25,    26,    27,    28,    29,    17,    11,    17,
       5,     6,    69,    18,    69,    11,    11,    52,    13,    67,
      15,    15,    21,     5,     6,    11,    71,    71,    71,    71,
      71,    71,     5,     9,    16,     5,    11,    12,    12,    12,
      41,    16,    71,    15,    15,    11,     5,    11,    14,    66,
      59,    66,    10,    71,    16,    16,    11,    14,    16,     5,
       6,    13,    13,    13,    67,    11,    16,     5,     6,    15,
      15,    19,    40,    11,    12,    15,    15,    11,    11,    12,
      12,    66,    11,    11,    16,    16,    66,    59,    13,    16,
      16,    13,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    55,    55,    56,    57,    57,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    63,    64,    64,    64,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     2,     1,     3,     2,     2,     1,     3,
       3,     4,     4,     1,     1,     1,     1,     1,     1,     2,
       1,     7,     4,     1,     1,     1,     1,     1,    11,    11,
       7,     8,    10,    10,     7,     5,     1,    11,     7,    11,
       7,     8,    10,     1,     2,     1,     3,     1,     1,     1,
       4,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     4,
       4,     1
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
#line 68 "project.y" /* yacc.c:1646  */
    {
					  printf("parsing successful\n");
					}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 79 "project.y" /* yacc.c:1646  */
    {
                            //printf("\n Declaration section successfully parsed\n");
                          }
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 87 "project.y" /* yacc.c:1646  */
    {
				      insert_to_table((yyvsp[-2].var_name),current_data_type,0);
			      }
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 91 "project.y" /* yacc.c:1646  */
    {
		          insert_to_table((yyvsp[-3].var_name),current_data_type,1);
			      }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "project.y" /* yacc.c:1646  */
    {
              insert_to_table((yyvsp[-3].var_name),current_data_type,1);
            }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "project.y" /* yacc.c:1646  */
    {
		          insert_to_table((yyvsp[0].var_name),current_data_type,0);
	          }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 107 "project.y" /* yacc.c:1646  */
    {
			        (yyval.data_type)=(yyvsp[0].data_type);
			        current_data_type=(yyvsp[0].data_type);
		        }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "project.y" /* yacc.c:1646  */
    {
              (yyval.data_type)=(yyvsp[0].data_type);
              current_data_type=(yyvsp[0].data_type);
            }
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "project.y" /* yacc.c:1646  */
    {
              (yyval.data_type)=(yyvsp[0].data_type);
              current_data_type=(yyvsp[0].data_type);
            }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 122 "project.y" /* yacc.c:1646  */
    {
              (yyval.data_type)=(yyvsp[0].data_type);
              current_data_type=(yyvsp[0].data_type);
            }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "project.y" /* yacc.c:1646  */
    {
                        //printf("\n program statements successfully parsed\n");
                      }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "project.y" /* yacc.c:1646  */
    {                                      	
                      if ((temp=lookup_in_table((yyvsp[-6].var_name))) != -1)
                      {
                        if (expn_type == -1)
                        {
                          expn_type=temp;
                        }
                        else if (expn_type != temp)
                        {
                          printf("ERROR - type mismatch in the expression\n");
                          exit(0);
                        }
                      }
                      else
                      {
                        printf("ERROR - variable \"%s\" undeclared\n",(yyvsp[-6].var_name));exit(0);
                      }
                      expn_type=-1;                      
                    }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 154 "project.y" /* yacc.c:1646  */
    {	
                      if ((temp=lookup_in_table((yyvsp[-3].var_name))) != -1)
                      {
                        if (expn_type == -1)
                        {
                          expn_type=temp;
                        }
                        else if (expn_type != temp)
                        {
                          printf("ERROR - type mismatch in the expression\n");
                          exit(0);
                        }
                      }
                      else
                      {
                        printf("ERROR - variable \"%s\" undeclared\n",(yyvsp[-3].var_name));exit(0);
                      }
                      expn_type=-1;

                      if(isArray((yyvsp[-3].var_name)) == 1)
                      {
                        printf("ERROR - array variable referenced without index\n");
                        exit(0);
                      }

				            }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 188 "project.y" /* yacc.c:1646  */
    {
          if (isArray(yylval.var_name) != 1)
          {
            printf("ERROR - placeholder variable type mismatch\n");
            exit(0);
          }

          char *ptr = NULL;

          ptr = strstr(text, "%d");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 0)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%c");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 1)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%f");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 2)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%lf");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 3)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }
        }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 243 "project.y" /* yacc.c:1646  */
    {
          char *ptr = NULL;

          ptr = strstr(text, "%s");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) == 1 && isArray(yylval.var_name) == 1) { }
            else
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }
          else 
          {
            printf("ERROR - placeholder variable type mismatch\n");
            exit(0);
          }
        }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 264 "project.y" /* yacc.c:1646  */
    {
          if(isArray(yylval.var_name) == 1)
          {
            printf("ERROR - placeholder variable type mismatch\n");
            exit(0);

            char *ptr = NULL;
          }

          char *ptr = NULL;
          
          ptr = strstr(text, "%d");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 0)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%c");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 1)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%f");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 2)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%lf");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 3)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }
        }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 321 "project.y" /* yacc.c:1646  */
    {
          if (isArray(yylval.var_name) != 1)
          {
            printf("ERROR - placeholder variable type mismatch\n");
            exit(0);
          }

          char *ptr = NULL;

          ptr = strstr(text, "%d");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 0)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%c");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 1)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%f");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 2)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%lf");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 3)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }
        }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 376 "project.y" /* yacc.c:1646  */
    {
          char *ptr = NULL;

          ptr = strstr(text, "%d");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 0)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%c");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 1)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%s");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 1 || isArray(yylval.var_name) != 1)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%f");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 2)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }

          ptr = strstr(text, "%lf");

          if (ptr != NULL)
          {
            if(lookup_in_table(yylval.var_name) != 3)
            {
              printf("ERROR - placeholder variable type mismatch\n");
              exit(0);
            }
          }
        }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 437 "project.y" /* yacc.c:1646  */
    {
                strcpy(text,(yyvsp[0].text));
              }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 483 "project.y" /* yacc.c:1646  */
    {  
            if ((temp=lookup_in_table((yyvsp[0].var_name))) != -1)
            {
              if (expn_type == -1)
              {
                expn_type=temp;
              }
              else if (expn_type != temp)
              {
                printf("ERROR - type mismatch in the expression\n");
                exit(0);
              }
            }
            else
            {
              printf("ERROR - variable \"%s\" undeclared\n",(yyvsp[0].var_name));exit(0);
            }

            if(isArray((yyvsp[0].var_name)) == 1)
            {
              printf("ERROR - array variable referenced without index\n");
              exit(0);
            }
          }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1910 "y.tab.c" /* yacc.c:1646  */
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
#line 508 "project.y" /* yacc.c:1906  */


void create_new_table () {

    struct node* new_node = (struct node*) malloc(sizeof(struct node));

    if (head == NULL) {        
        new_node->prev = NULL;        
    }
    else {    
        new_node->prev = head;        
    }

    head = new_node;

    for (int i=0; i<20; i++) {
        head->var_list[i].type = -1;      
    }    

}

void delete_table () {

    if (head->prev == NULL) {
        free(head);
        head = NULL;
    }

    else {
        struct node* temp = head;    
        head = head->prev;    
        free(temp);
    }   

}

void insert_to_table (char var[30], int type, int isArray) {

    int index = hash(var);

    while (head->var_list[index].type != -1) {
        index = (index + 1) % 20;
    } 
    
    strcpy(head->var_list[index].var_name,var);
    head->var_list[index].type = type;
    head->var_list[index].isArray = isArray;

}

int lookup_in_table (char var[30]) {

    int index = hash(var);
    struct node* iterator = head;    

    while (iterator != NULL) {

        while (iterator->var_list[index].type != -1) {

            if (strcmp(iterator->var_list[index].var_name,var) == 0) {
                return iterator->var_list[index].type;                
            }

            index = (index + 1) % 20;
        }

        iterator = iterator->prev;
    }

    return -1;
}

int hash (char var[30]) {
   
    long long int hash = 7;

    for (int i = 0; i < strlen(var); i++) {
        hash = hash*31 + (int) var[i];
    }

    hash = hash % 20;    
    return hash;

}

int isArray (char var[30]) {

  int index = hash(var);
  struct node* iterator = head;  
  
  while (iterator != NULL) {

    while (iterator->var_list[index].type != -1) {

      if (strcmp(iterator->var_list[index].var_name,var) == 0) {
      
        if(iterator->var_list[index].isArray == 1) {
          
          return 1;

        }
                        
      }
      index = (index + 1) % 20;
    }
    iterator = iterator->prev;
  }

  return 0; 

}

int main() {

    yyparse();
    // if(success)
    //   printf("Parsing Successful\n");
    return 0;

}

int yyerror(const char *msg) {

	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;

}
