#include <string>

class GoodJimi
{
private:
    std::string name;
    bool hasBlade;
    int age;

public:
    GoodJimi(std::string name, bool hasBlade, int age);
    GoodJimi();
    // methods to get var
    std::string getName();
    bool getHasBlade();
    int getAge();
};