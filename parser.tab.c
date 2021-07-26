/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

# include "./abstract_syntax_tree/AstNode.h"
# include <stdio.h>
# include <stdlib.h>
#include <iostream>

extern char *yytext;
extern int yylex();
extern void yyerror(char* s);
extern FILE * yyin;
AbstractAstNode* root;

#line 83 "parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    ASSIGN_OP = 258,
    OR = 259,
    AND = 260,
    EQ_OP = 261,
    NE_OP = 262,
    GT_OP = 263,
    LT_OP = 264,
    GE_OP = 265,
    LE_OP = 266,
    ADD = 267,
    SUB = 268,
    MUL = 269,
    DIV = 270,
    MOD = 271,
    POW = 272,
    NOT = 273,
    PRINTF = 274,
    SCANF = 275,
    IDENTIFIER = 276,
    CONST = 277,
    LOWER_THAN_ELSE = 278,
    EOL = 279,
    COMMA = 280,
    SEMI = 281,
    S_QUO = 282,
    D_QUO = 283,
    WHILE = 284,
    FOR = 285,
    IF = 286,
    ELSE = 287,
    THEN = 288,
    RETURN = 289,
    INT = 290,
    VOID = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

  AbstractAstNode* ast;
  // int ast;
  char* str;

#line 178 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      19,    20,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
      15,    16,    17,    18,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    40,
      41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    79,    86,    97,   108,   117,   128,   136,
     145,   158,   165,   172,   183,   191,   205,   213,   222,   230,
     239,   249,   261,   268,   275,   282,   288,   297,   304,   314,
     325,   334,   342,   351,   359,   367,   377,   386,   395,   407,
     418,   425,   436,   443,   454,   460,   469,   476,   483,   489,
     495,   501,   507,   513,   519,   525,   531,   537,   544,   551,
     556,   562,   568,   574,   580,   586,   593,   598,   610
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN_OP", "OR", "AND", "EQ_OP",
  "NE_OP", "GT_OP", "LT_OP", "GE_OP", "LE_OP", "ADD", "SUB", "MUL", "DIV",
  "MOD", "POW", "NOT", "'('", "')'", "'['", "']'", "PRINTF", "SCANF",
  "IDENTIFIER", "CONST", "LOWER_THAN_ELSE", "EOL", "COMMA", "SEMI",
  "S_QUO", "D_QUO", "WHILE", "FOR", "IF", "ELSE", "THEN", "'{'", "'}'",
  "RETURN", "INT", "VOID", "$accept", "Program", "BlockList", "Block",
  "Vardef", "Descriptor", "Func", "VarList", "Param", "Body", "StmtList",
  "Stmt", "Def", "DefList", "Var", "Fordef", "Exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    40,
      41,    91,    93,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   123,   125,
     289,   290,   291
};
# endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    -2,   -59,    33,   -15,   -59,     6,   -59,   -59,   -59,
     -10,    31,   -22,   -13,    23,    30,   -59,   -59,   -59,   -59,
     -59,    37,   -16,   -59,    45,   -59,    76,   -59,   -59,   -15,
     -59,    38,    44,    38,    38,    -4,   -59,    51,    53,    54,
     -59,   397,    50,    49,   -59,   -59,    52,   152,   -59,     4,
     -59,   -59,   284,    38,    38,   112,    38,   -59,   180,    60,
       3,   -59,    55,   -59,   -59,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
     -59,   -59,   264,   302,   400,   -59,    56,   443,   320,   -59,
      38,    50,   443,   473,   164,   190,   190,   214,   214,   214,
     214,     4,     4,    68,    68,    68,   -59,   -59,    94,   126,
     208,   415,    94,   443,   -59,   -59,    94,   338,   418,   448,
     236,    57,   -59,    94,    94,   356,    94,   374,   451,    94,
     -59,   -59,    94,   -59,    94,    94,   392,   -59,   -59,   -59,
     -59,    94,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    12,     0,     2,     3,     0,    13,     1,     4,
       8,     0,     0,     0,     0,     0,     5,     7,    22,     6,
      14,    19,     0,    17,     0,     9,     0,    18,    15,     0,
      10,     0,     0,     0,     0,    47,    46,     0,     0,     0,
      20,     0,     0,     0,    25,    21,     0,     0,    16,    56,
      67,    59,     0,     0,     0,     0,     0,    27,     0,     8,
      42,    39,    40,    66,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    55,     0,     0,     0,    44,     0,    45,     0,    26,
       0,     0,    48,    58,    57,    60,    61,    62,    63,    64,
      65,    49,    50,    51,    52,    53,    54,    68,     0,     0,
       0,     0,     0,    43,    41,    30,     0,     0,     0,     0,
       0,    28,    31,     0,     0,     0,     0,     0,     0,     0,
      34,    33,     0,    32,     0,     0,     0,    29,    38,    37,
      36,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -59,    87,    86,     1,    90,   -59,    69,    88,
     -59,   -58,    48,     8,   -59,   -59,   -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    60,    42,    43,    22,    23,    44,
      26,    45,    46,    61,    62,    86,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      49,     6,    51,    52,    28,     6,    90,    20,    17,    13,
      58,    14,     7,    29,    21,    13,    18,    53,    76,    77,
      78,    79,    82,    83,    87,    88,     1,     2,     1,     2,
      21,    10,    15,     8,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    24,
     115,    31,    32,   110,   121,    25,    33,    34,   122,   113,
      15,    16,    27,    35,    36,   130,   131,    30,   133,    50,
      54,   137,    55,    56,   138,    59,   139,   140,   117,    63,
     120,    14,    64,   142,    91,    79,   111,   125,   127,    31,
      32,     9,    11,   129,    33,    34,    12,   136,    48,   114,
      19,    35,    36,    85,     0,     0,     0,    31,    32,    37,
      38,    39,    33,    34,    18,    40,    41,     1,     2,    35,
      36,     0,     0,     0,     0,    31,    32,    37,    38,    39,
      33,    34,    18,     0,    41,     1,     2,    35,    36,    31,
      32,     0,    84,     0,    33,    34,   116,     0,     0,     0,
       0,    35,    36,     1,     2,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      89,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,   118,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,   107,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,    81,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,   108,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
     112,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,   123,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,   132,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,   134,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      31,    32,   141,    31,    32,    33,    34,     0,    33,    34,
       0,     0,    35,    36,     0,    35,    36,    57,    31,    32,
     109,    31,    32,    33,    34,     0,    33,    34,   124,     0,
      35,    36,     0,    35,    36,   119,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    31,    32,     0,    31,    32,    33,    34,   126,    33,
      34,   135,     0,    35,    36,     0,    35,    36,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79
};

static const yytype_int16 yycheck[] =
{
      31,     0,    33,    34,    20,     4,     3,    20,    30,    19,
      41,    21,    14,    29,    13,    19,    38,    21,    14,    15,
      16,    17,    53,    54,    55,    56,    41,    42,    41,    42,
      29,    25,    29,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    26,
     108,    13,    14,    84,   112,    25,    18,    19,   116,    90,
      29,    30,    25,    25,    26,   123,   124,    22,   126,    25,
      19,   129,    19,    19,   132,    25,   134,   135,   109,    30,
     111,    21,    30,   141,    29,    17,    30,   118,   119,    13,
      14,     4,     6,    36,    18,    19,     6,   128,    29,    91,
      12,    25,    26,    55,    -1,    -1,    -1,    13,    14,    33,
      34,    35,    18,    19,    38,    39,    40,    41,    42,    25,
      26,    -1,    -1,    -1,    -1,    13,    14,    33,    34,    35,
      18,    19,    38,    -1,    40,    41,    42,    25,    26,    13,
      14,    -1,    30,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,    41,    42,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    30,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      30,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    30,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    20,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      20,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    20,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      13,    14,    20,    13,    14,    18,    19,    -1,    18,    19,
      -1,    -1,    25,    26,    -1,    25,    26,    30,    13,    14,
      30,    13,    14,    18,    19,    -1,    18,    19,    20,    -1,
      25,    26,    -1,    25,    26,    30,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    13,    14,    -1,    13,    14,    18,    19,    20,    18,
      19,    20,    -1,    25,    26,    -1,    25,    26,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,    44,    45,    46,    48,    14,     0,    46,
      25,    47,    49,    19,    21,    29,    30,    30,    38,    52,
      20,    48,    50,    51,    26,    25,    53,    25,    20,    29,
      22,    13,    14,    18,    19,    25,    26,    33,    34,    35,
      39,    40,    48,    49,    52,    54,    55,    59,    51,    59,
      25,    59,    59,    21,    19,    19,    19,    30,    59,    25,
      47,    56,    57,    30,    30,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      30,    20,    59,    59,    30,    55,    58,    59,    59,    30,
       3,    29,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    22,    20,    30,
      59,    30,    20,    59,    56,    54,    20,    59,    30,    30,
      59,    54,    54,    20,    20,    59,    20,    59,    30,    36,
      54,    54,    20,    54,    20,    20,    59,    54,    54,    54,
      54,    20,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    47,    47,
      47,    48,    48,    48,    49,    49,    50,    50,    51,    51,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     3,     3,     1,     3,
       4,     1,     1,     2,     3,     4,     3,     1,     2,     1,
       3,     2,     0,     2,     2,     1,     3,     2,     5,     7,
       5,     6,     7,     7,     7,     9,     8,     8,     8,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 70 "parser.y"
             {
        root = new AbstractAstNode(AstNodeType::ROOT,"Program");
        root->addFirstChild((yyvsp[0].ast));
        printAst(root);
    }
#line 1518 "parser.tab.c"
    break;

  case 3:
#line 79 "parser.y"
         {
      printf("Blocklist->block \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Single_Block");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1529 "parser.tab.c"
    break;

  case 4:
#line 86 "parser.y"
                   {
    printf("blocklist->blocklist block \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Some_Block");
        node->addFirstChild((yyvsp[-1].ast));
        (yyvsp[-1].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 1541 "parser.tab.c"
    break;

  case 5:
#line 97 "parser.y"
                          {
      printf("blcok->Descriptor Vardef SEMI \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Def_Var_Block");
        
        node->addFirstChild((yyvsp[-2].ast));
        
        (yyvsp[-2].ast)->addNextSibling((yyvsp[-1].ast));
        
        (yyval.ast) = node;
    }
#line 1556 "parser.tab.c"
    break;

  case 6:
#line 108 "parser.y"
                        {
    printf("block->Descriptor Func Body \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Def_Func_Body_Block");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[-1].ast));
        (yyvsp[-1].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1569 "parser.tab.c"
    break;

  case 7:
#line 117 "parser.y"
                        {
    printf("block->Descriptor Func SEMI \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Def_Func_NBody_Block");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[-1].ast));
        (yyval.ast) = node;
    }
#line 1581 "parser.tab.c"
    break;

  case 8:
#line 128 "parser.y"
              {//a ok
      printf("vardef->identifier \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Block_Single_Vardef");
        AbstractAstNode* var_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[0].str));
        node->addFirstChild(var_node);
        (yyval.ast) = node;
    }
#line 1593 "parser.tab.c"
    break;

  case 9:
#line 136 "parser.y"
                           {//a,b ok
    printf("vardef->vardef comma identifier \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Block_Some_Vardef");
        AbstractAstNode* var_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[0].str));
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling(var_node);
        (yyval.ast) = node;
    }
#line 1606 "parser.tab.c"
    break;

  case 10:
#line 145 "parser.y"
                            {//ok
    printf("vardef->identifier[const] \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::EXPRESSION,"array_id[const]");
        AbstractAstNode* const_node = new AbstractAstNode(AstNodeType::CONST_INT, (yyvsp[-1].str));
        AbstractAstNode* var_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[-3].str));
        node->addFirstChild(var_node);
        var_node->addNextSibling(const_node);
        (yyval.ast) = node;

  }
#line 1621 "parser.tab.c"
    break;

  case 11:
#line 158 "parser.y"
       {
        printf("descriptor->int \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::MODIFY,"INT_TYPE");
        // AbstractAstNode* int_node=new AbstractAstNode(AstNodeType::TYPE,$1);
        // node->addFirstChild(int_node);
        (yyval.ast) = node;
    }
#line 1633 "parser.tab.c"
    break;

  case 12:
#line 165 "parser.y"
        {
        printf("descriptor->void \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::MODIFY,"VOID_TYPE");
        // AbstractAstNode* void_node = new AbstractAstNode(AstNodeType::TYPE,$1);
        // node->addFirstChild(void_node);
        (yyval.ast) = node;
    }
#line 1645 "parser.tab.c"
    break;

  case 13:
#line 172 "parser.y"
           {//int*
        printf("descriptor->int mul \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::MODIFY,"INT*_TYPE");
        // AbstractAstNode* int_node = new AbstractAstNode(AstNodeType::TYPE,$1);
        // node->addFirstChild(int_node);
        (yyval.ast) = node;
    }
#line 1657 "parser.tab.c"
    break;

  case 14:
#line 183 "parser.y"
                       {
      printf("func->identfier() \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Func_NParam");
        AbstractAstNode* id_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[-2].str));
        node->addFirstChild(id_node);
        (yyval.ast) = node;
    }
#line 1669 "parser.tab.c"
    break;

  case 15:
#line 191 "parser.y"
                              {
      printf("func->identifier(varlist) \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Func_Params");
        AbstractAstNode* id_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[-3].str));
        //node->addFirstChild(id_node);
        /////////////////?
        //$1->addNextSibling($3);
        //id_node->addNextSibling($3);
        (yyval.ast) = node;
    }
#line 1684 "parser.tab.c"
    break;

  case 16:
#line 205 "parser.y"
                       {
      printf("varlist->varlist,param \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Some_Param");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1696 "parser.tab.c"
    break;

  case 17:
#line 213 "parser.y"
         {
    printf("varlist->param \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Single_Param");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1707 "parser.tab.c"
    break;

  case 18:
#line 222 "parser.y"
                         {
      printf("param->descriptor identifier \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Param_ID");
        AbstractAstNode* id_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[0].str));
        node->addFirstChild((yyvsp[-1].ast));
        (yyvsp[-1].ast)->addNextSibling(id_node);
        (yyval.ast) = node;
    }
#line 1720 "parser.tab.c"
    break;

  case 19:
#line 230 "parser.y"
               {
    printf("param->descriptor \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Param_NID");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1731 "parser.tab.c"
    break;

  case 20:
#line 239 "parser.y"
                    {
      printf("body->{stmtlist} \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Body");
        node->addFirstChild((yyvsp[-1].ast));
        (yyval.ast) = node;
    }
#line 1742 "parser.tab.c"
    break;

  case 21:
#line 249 "parser.y"
                     {
    printf("stmtlist->stmtlist stmt \n");
	    AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Some_Stmt");
	    if ((yyvsp[-1].ast) == NULL) {
	        node->addFirstChild((yyvsp[0].ast));
	    } else {
	        node->addFirstChild((yyvsp[-1].ast));
            (yyvsp[-1].ast)->addNextSibling((yyvsp[0].ast));
        }
        (yyval.ast) = node;
	}
#line 1758 "parser.tab.c"
    break;

  case 22:
#line 261 "parser.y"
    {
      (yyval.ast) = NULL;
    }
#line 1766 "parser.tab.c"
    break;

  case 23:
#line 268 "parser.y"
            {
      printf("stmt->exp; \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Exp_Stmt");
        node->addFirstChild((yyvsp[-1].ast));
        (yyval.ast) = node;
    }
#line 1777 "parser.tab.c"
    break;

  case 24:
#line 275 "parser.y"
            {
    printf("stmt->def; \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Def_Stmt");
        node->addFirstChild((yyvsp[-1].ast));
        (yyval.ast) = node;
    }
#line 1788 "parser.tab.c"
    break;

  case 25:
#line 282 "parser.y"
        {
    printf("stmt->body \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Body_Stmt");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1799 "parser.tab.c"
    break;

  case 26:
#line 288 "parser.y"
                   {
    printf("stmt->return exp ; \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Return_Exp");
        // AbstractAstNode* return_node = new AbstractAstNode(AstNodeType::RETURN,$1);
        // node->addFirstChild(return_node);
        // $1->addNextSibling($2);
        node->addFirstChild((yyvsp[-1].ast));
        (yyval.ast) = node;
    }
#line 1813 "parser.tab.c"
    break;

  case 27:
#line 297 "parser.y"
               {
    printf("stmt->return ; \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"Return_Void");
        // AbstractAstNode* return_node = new AbstractAstNode(AstNodeType::RETURN,$1);
        // node->addFirstChild(return_node);
        (yyval.ast) = node;
    }
#line 1825 "parser.tab.c"
    break;

  case 28:
#line 304 "parser.y"
                        {
    printf("stmt->if(exp)stmt \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"If");
        // AbstractAstNode* if_node = new AbstractAstNode(AstNodeType::SELECT,$1);
        // node->addFirstChild(if_node);
        // $1->addNextSibling($3);
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1840 "parser.tab.c"
    break;

  case 29:
#line 314 "parser.y"
                                                       {
    printf("stmt->if(exp)stmt else stmt \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"If_Else");
        // AbstractAstNode* if_node = new AbstractAstNode(AstNodeType::SELECT,$1);
        // AbstractAstNode* else_node = new AbstractAstNode(AstNodeType::SELECT,$6);
        // node->addFirstChild(if_node);
        node->addFirstChild((yyvsp[-4].ast));
        (yyvsp[-4].ast)->addNextSibling((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1856 "parser.tab.c"
    break;

  case 30:
#line 325 "parser.y"
                          {
    printf("stmt->while ( exp) stmt \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"While");
        // AbstractAstNode* while_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(while_node);
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1870 "parser.tab.c"
    break;

  case 31:
#line 334 "parser.y"
                              {
    printf("stmt->for ( ;; \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_SEMI_SEMI");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1883 "parser.tab.c"
    break;

  case 32:
#line 342 "parser.y"
                                     {
    printf("stmt->for(fordef;;)stmt \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_Def_SEMI_SEMI");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-4].ast));
        (yyvsp[-4].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1897 "parser.tab.c"
    break;

  case 33:
#line 351 "parser.y"
                                 {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_SEMI_Exp_SEMI");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-3].ast));
        (yyvsp[-3].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1910 "parser.tab.c"
    break;

  case 34:
#line 359 "parser.y"
                                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_SEMI_SEMI_Exp");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1923 "parser.tab.c"
    break;

  case 35:
#line 367 "parser.y"
                                             {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_Def_SEMI_Exp_SEMI_Exp");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-6].ast));
        (yyvsp[-6].ast)->addNextSibling((yyvsp[-4].ast));
        (yyvsp[-4].ast)->addNextSibling((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1938 "parser.tab.c"
    break;

  case 36:
#line 377 "parser.y"
                                        {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_Def_SEMI_Exp_SEMI");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-5].ast));
        (yyvsp[-5].ast)->addNextSibling((yyvsp[-3].ast));
        (yyvsp[-3].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1952 "parser.tab.c"
    break;

  case 37:
#line 386 "parser.y"
                                         {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_Def_SEMI_SEMI_Exp");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-5].ast));
        (yyvsp[-5].ast)->addNextSibling((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1966 "parser.tab.c"
    break;

  case 38:
#line 395 "parser.y"
                                      {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::STATEMENT,"For_SEMI_Exp_SEMI_Exp");
        // AbstractAstNode* for_node = new AbstractAstNode(AstNodeType::LOOP,$1);
        // node->addFirstChild(for_node);
        node->addFirstChild((yyvsp[-4].ast));
        (yyvsp[-4].ast)->addNextSibling((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 1980 "parser.tab.c"
    break;

  case 39:
#line 407 "parser.y"
                      {//!!
      printf("def->descriptor deflist \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Def_Var");
        node->addFirstChild((yyvsp[-1].ast));
        (yyvsp[-1].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 1992 "parser.tab.c"
    break;

  case 40:
#line 418 "parser.y"
       {//ok
      printf("deflist->var \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Def_Single_Var");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 2003 "parser.tab.c"
    break;

  case 41:
#line 425 "parser.y"
                     {//ok
    printf("deflist->var ,deflist \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Def_Some_Var");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 2015 "parser.tab.c"
    break;

  case 42:
#line 436 "parser.y"
          {//ok
      printf("var->vardef \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Var_ONLY");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2026 "parser.tab.c"
    break;

  case 43:
#line 443 "parser.y"
                        {//ok a,b=c
    printf("var->vardef = exp \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"Var_ASSIGN");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2038 "parser.tab.c"
    break;

  case 44:
#line 454 "parser.y"
       {
      printf("fordef->def \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"For_Def");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2049 "parser.tab.c"
    break;

  case 45:
#line 460 "parser.y"
       {//a=1 ok
    printf("fordef->exp \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::DEFINITION,"For_Exp");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2060 "parser.tab.c"
    break;

  case 46:
#line 469 "parser.y"
          {
      printf("exp->const \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::EXPRESSION,"Const_Exp");
        AbstractAstNode* const_node = new AbstractAstNode(AstNodeType::CONST_INT, (yyvsp[0].str));
        node->addFirstChild(const_node);
        (yyval.ast) = node;
    }
#line 2072 "parser.tab.c"
    break;

  case 47:
#line 476 "parser.y"
               {
    printf("exp->identfier \n");
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::EXPRESSION,"ID_Exp");
        AbstractAstNode* id_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[0].str));
        node->addFirstChild(id_node);
        (yyval.ast) = node;
    }
#line 2084 "parser.tab.c"
    break;

  case 48:
#line 483 "parser.y"
                      {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Assign");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
  }
#line 2095 "parser.tab.c"
    break;

  case 49:
#line 489 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Addition");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
  }
#line 2106 "parser.tab.c"
    break;

  case 50:
#line 495 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Substraction");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 2117 "parser.tab.c"
    break;

  case 51:
#line 501 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Multipliy");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
  }
#line 2128 "parser.tab.c"
    break;

  case 52:
#line 507 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Divide");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 2139 "parser.tab.c"
    break;

  case 53:
#line 513 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Mod");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 2150 "parser.tab.c"
    break;

  case 54:
#line 519 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "Power");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast) = node;
    }
#line 2161 "parser.tab.c"
    break;

  case 55:
#line 525 "parser.y"
               {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "()");
        node->addFirstChild((yyvsp[-1].ast));
        (yyval.ast) = node;
    }
#line 2171 "parser.tab.c"
    break;

  case 56:
#line 531 "parser.y"
            {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "MINUS");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2181 "parser.tab.c"
    break;

  case 57:
#line 537 "parser.y"
                {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "AND");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2192 "parser.tab.c"
    break;

  case 58:
#line 544 "parser.y"
               {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "OR");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2203 "parser.tab.c"
    break;

  case 59:
#line 551 "parser.y"
           {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "NOT");
        node->addFirstChild((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2213 "parser.tab.c"
    break;

  case 60:
#line 556 "parser.y"
                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "EQ_OP");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2224 "parser.tab.c"
    break;

  case 61:
#line 562 "parser.y"
                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "NE_OP");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2235 "parser.tab.c"
    break;

  case 62:
#line 568 "parser.y"
                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "GT_OP");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2246 "parser.tab.c"
    break;

  case 63:
#line 574 "parser.y"
                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "LT_OP");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2257 "parser.tab.c"
    break;

  case 64:
#line 580 "parser.y"
                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "GE_OP");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2268 "parser.tab.c"
    break;

  case 65:
#line 586 "parser.y"
                  {
        AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "LE_OP");
        node->addFirstChild((yyvsp[-2].ast));
        (yyvsp[-2].ast)->addNextSibling((yyvsp[0].ast));
        (yyval.ast)=node;
    }
#line 2279 "parser.tab.c"
    break;

  case 66:
#line 593 "parser.y"
             {//use function
    AbstractAstNode* node = new AbstractAstNode(AstNodeType::OPERATION, "func;");
    node->addFirstChild((yyvsp[-1].ast));
    (yyval.ast)=node;
  }
#line 2289 "parser.tab.c"
    break;

  case 67:
#line 598 "parser.y"
                  {//*id
      AbstractAstNode* node = new AbstractAstNode(AstNodeType::EXPRESSION,"*id");
      AbstractAstNode* id_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[0].str));
      node->addFirstChild(id_node);
      (yyval.ast) = node;
  }
#line 2300 "parser.tab.c"
    break;

  case 68:
#line 610 "parser.y"
                          {//like a[2+3]
      AbstractAstNode* node = new AbstractAstNode(AstNodeType::EXPRESSION,"id[exp]");
      AbstractAstNode* id_node = new AbstractAstNode(AstNodeType::ID, (yyvsp[-3].str));
      node->addFirstChild(id_node);
      id_node->addNextSibling((yyvsp[-1].ast));
      (yyval.ast)=node;
  }
#line 2312 "parser.tab.c"
    break;


#line 2316 "parser.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 619 "parser.y"

int  main(int argc, char** argv)
{
  if ( argc > 1 ) {
    if (! (yyin = fopen(argv[1], "r" ) )){
      perror(argv[1]);
      return 1;
    }
    printf("[i]>>>Read data from file:%s \n",argv[1]);
  }else{
    printf("[I]>>>Read data from stdin.\n");
  }
  do {
		yyparse();
	} while(!feof(yyin));
  return 0;

}

void yyerror(char *s)
{
  // fprintf(stderr, "error: %s\n", s);
}
