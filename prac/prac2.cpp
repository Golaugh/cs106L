#include <iostream>
#include <map>

int main() {
    std::map<int, int> m {{1, 2}, {3, 4}, {5, 6}};
    auto a = m.begin();
    auto elem = *a;
    std::cout << "The first ele is " << elem.first << " and " << elem.second << '\n';
    return 0;
}