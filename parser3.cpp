#include "Parser.h"

Parser::Parser(const std::string& filename) : file(filename) {}

void Parser::read(int& N, int& M, std::vector<std::pair<int, int>>& Edges) {
    int i = 0;
    file >> N >> M;
    Edges.resize(M);
    for (i = 0; i < M; i++) {
        file >> Edges[i].first >> Edges[i].second;
    }
}
