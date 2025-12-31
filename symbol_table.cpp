#include "symbol_table.h"
#include <iostream>

void SymbolTable::addSymbol(const std::string& name, const std::string& type) {
    table[name] = type;
}

void SymbolTable::display() {
    std::cout << "\nSYMBOL TABLE\n";
    for (auto& entry : table)
        std::cout << entry.first << " : " << entry.second << std::endl;
}
