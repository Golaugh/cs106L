#include <iostream>
#include <utility>
#include <cmath>

using Roots = std::pair<double, double>;
using Solution = std::pair<bool, Roots>;
Solution solveQuadratic(double a, double b, double c);

Solution solveQuadratic(double a, double b, double c) {
    bool judge;
    double judge_val;

    judge_val = pow(b, 2) - 4 * a * c;
    if (judge_val < 0) {
        judge = false;
        return {judge, {0.0, 0.0}};
    }

    judge = true;
    Roots roots;
    roots.first = (-b + std::sqrt(judge_val)) / (2 * a);
    roots.second = (-b - std::sqrt(judge_val)) / (2 * a);
    return {judge, {roots.first, roots.second}};
}

int main() {
    auto [hasRoots, roots] = solveQuadratic(1, -3, 2);
    if (hasRoots) {
        auto [r1, r2] = roots;
        std::cout << "The roots are " << r1 << " and " << r2 << std::endl;
    } else {
        std::cout << "No roots found." << std::endl;
    }
    return 0;
}