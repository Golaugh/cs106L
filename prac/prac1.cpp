#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> map = {
        {"jimi", 666},
        {"ha!", 999}
    };
    int jimi = map["jimi"];
    map["ha!"] = 0;

    map["new_jimi"] = 66;
    map.insert({"new_new_jimi", 6});

    map.erase("ha!");
    if (!map.count("ha!")) {
        std::cout << "No ha! anymore!" << '\n';
    }

    map.clear();
    if (map.empty()) {
        std::cout << "map cleared!" << '\n';
    }
}