/* A Bison parser, made by GNU Bison 3.5.1.  */
# include "./abstract_syntax_tree/AstNode.h"
/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 100 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
