#include <cstring>
#include "lexer.h"



int main(int argc, char** argv)
{
    for (int i = 1; i < argc; ++i) {
        Calc::Lexer lexer(argv[i], argv[i] + strlen(argv[i]));
        Calc::Parser parser(lexer);
        parser.parse();
    }
    return 0;
}
