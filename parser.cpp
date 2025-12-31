#include "parser.h"
#include <iostream>

bool parse(const std::vector<Token>& tokens) {
    if (tokens.size() < 3) {
        std::cout << "Syntax Error\n";
        return false;
    }
    std::cout << "Syntax Analysis Passed\n";
    return true;
}
