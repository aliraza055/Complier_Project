#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <string>
#include <map>

class SymbolTable {
public:
    void addSymbol(const std::string& name, const std::string& type);
    void display();

private:
    std::map<std::string, std::string> table;
};

#endif
