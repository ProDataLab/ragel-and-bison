#include "lexer.h"
#include <cstdlib>
#include <string>



%%{

    machine Lexer;
    alphtype char;
    write data;


    identifier = [a-zA-Z_]([a-zA-Z0-9_] | '-')*;


    main := |*

        identifier
            =>  {
                    ret = Parser::token::IDENTIFIER;
                    *val = (char*)std::string(ts, te).c_str();
                    fbreak;
                };

        space;

    *|;

}%%




Calc::Lexer::Lexer(char const* p_, char const* pe_)
    : p(p_), pe(pe_), eof(pe_)
{
    %% write init;
}


Calc::Parser::token_type Calc::Lexer::lex(Parser::semantic_type* val)
{
    Parser::token_type ret = Parser::token::END;
    %% write exec;
    return ret;
}
























































