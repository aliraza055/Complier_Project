#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

struct Token {
    std::string type;
    std::string value;
};

std::vector<Token> lexicalAnalyze(const std::string& input);

#endif
