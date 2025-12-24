#include <iostream>
#include <cstddef>
#include "prac4_vec.h"

void printVec(const Vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    Vector<int> vec;

    for (size_t i = 0; i < 5; i++) {
        vec.push_back(i);
    }
    printVec(vec);

    vec.at(0) = 666;
    printVec(vec);
    return 0;
}