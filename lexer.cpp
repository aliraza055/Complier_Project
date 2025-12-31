#include "lexer.h"
#include <cctype>

bool isKeyword(const std::string& word) {
    std::string keywords[] = {"int", "float", "if", "else", "while", "return"};
    for (auto& k : keywords)
        if (word == k)  return true;
    return false;
}

std::vector<Token> lexicalAnalyze(const std::string& input) {
    std::vector<Token> tokens;
    std::string temp;

    for (int i = 0; i <= input.length(); i++) {
        char ch = input[i];

        if (isalnum(ch)) {
            temp += ch;
        } else {
            if (!temp.empty()) {
                if (isKeyword(temp))
                    tokens.push_back({"KEYWORD", temp});
                else if (isdigit(temp[0]))
                    tokens.push_back({"NUMBER", temp});
                else
                    tokens.push_back({"IDENTIFIER", temp});
                temp.clear();
            }

            if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
                tokens.push_back({"OPERATOR", std::string(1, ch)});
            else if (ch == ';' || ch == '(' || ch == ')')
                tokens.push_back({"SEPARATOR", std::string(1, ch)});
        }
    }
    return tokens;
}
