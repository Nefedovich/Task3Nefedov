
#ifndef PARSER_H
#define PARSER_H

#include <fstream>
#include <vector>
#include <utility>

class Parser {
private:
    std::ifstream file;
public:
    Parser(const std::string& filename);
    void read(int& N, int& M, std::vector<std::pair<int, int>>& Edges);
};

#endif // PARSER_H
