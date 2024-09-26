#include "Solver.h"

Solver::Solver(const std::vector<std::pair<int, int>>& edges, int N) : edge_lst(edges), Num(N) {}

void Solver::Coloring(int* color) {
    for (int i = 0; i < Num; ++i) {
        color[i] = 1;
    }
    for (int i = 0; i < Num; i++) {
        int vertex = i;
        int chosenColor = 1;
        for (const auto& edge : edge_lst) {
            if (edge.first == vertex) {
                if (color[edge.second] == chosenColor) {
                    chosenColor++;
                }
            } else if (edge.second == vertex) {
                if (color[edge.first] == chosenColor) {
                    chosenColor++;
                }
            }
        }
        color[vertex] = chosenColor;
    }
}
