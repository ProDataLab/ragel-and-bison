#pragma once

#include "parser.h"

namespace Calc {

    class Lexer
    {

    public:
        Lexer(char const*, char const*);
        Parser::token_type lex(Parser::semantic_type*);

    private:
        char const* p;
        char const* const pe;
        char const* const eof;
        int cs;
        char const* ts;
        char const* te;
        int act;
    };
}
