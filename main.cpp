#include <iostream>
#include "lexer.h"
#include "parser.h"
#include "symbol_table.h"

int main() {
    std::string input;
    std::cout << "Enter source code:\n";
    getline(std::cin, input);

    auto tokens = lexicalAnalyze(input);

    std::cout << "\nTOKENS\n";
    for (auto& t : tokens)
        std::cout << t.type << " : " << t.value << std::endl;

    SymbolTable st;
    for (auto& t : tokens)
        if (t.type == "IDENTIFIER")
            st.addSymbol(t.value, "int");

    parse(tokens);
    st.display();

    return 0;
}
