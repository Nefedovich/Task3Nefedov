#include "Parser.h"
#include "Solver.h"
#include <iostream>

int main() {
    Parser parser("input.txt");
    int N, M;
    std::vector<std::pair<int, int>> Edges;
    parser.read(N, M, Edges);
    Solver solver(Edges, N);
    int* color = new int[N];
    solver.Coloring(color);
    for (int i = 0; i < N; i++) {
        std::cout << "Vertex " << i << " colored " << color[i] << std::endl;
    }
    delete[] color;
    return 0;
}
