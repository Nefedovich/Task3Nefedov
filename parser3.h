
#ifndef SOLVER_H
#define SOLVER_H

#include <vector>
#include <utility>

class Solver {
private:
    std::vector<std::pair<int, int>> edge_lst;
    int Num;
public:
    Solver(const std::vector<std::pair<int, int>>& edges, int N);
    void Coloring(int* color);
};

#endif // SOLVER_H
