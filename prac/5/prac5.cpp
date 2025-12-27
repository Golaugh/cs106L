#include <iostream>

int main() {
    if consteval { std::cout << "consteval works" << std::endl; }
    std::cout << __cplusplus << std::endl;
    system("pause");
    return 0;
}