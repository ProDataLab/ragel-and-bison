%skeleton "lalr1.cc"
%require "2.5"
%defines
%define namespace "Calc"
%define parser_class_name "Parser"
/*%define api.value.type {struct semantic_type}*/

%code requires {
    namespace Calc {class Lexer;}
    #include <cmath>
    #include <iostream>
    #define YYSTYPE char*
}


%parse-param {Calc::Lexer & lexer}


%code {
    #include "lexer.h"
    #define yylex lexer.lex
}


%token END      0   "end of file"

/*

%token LPAREN   40  "("

%token RPAREN   41  ")"

%token DOT      42  "."

%token INDENT   60

*/

%token IDENTIFIER       50




%%


input
    : /* empty */
    | identifier         { std::cout << $1 << " : identifier" << '\n'; }
/*    | function      { std::cout << $1 << "function" << '\n'; } */
    ;

identifier
    : IDENTIFIER         { $$ = $1; }
    ;

/*
function
    : IDENT LPAREN RPAREN
                    { $$ = $1; }
*/


%%

void Calc::Parser::error(const location_type & loc, const std::string & msg)
{
    std::cerr << loc << ": " << msg << '\n';
}





















































