#include <iostream>
#include <string>
#include "GoodJimi.h"

// uniformed constructor
GoodJimi::GoodJimi(std::string name, bool hasBlade, int age)
    : name{name}, hasBlade{hasBlade}, age{age > 0 ? age : 0} {};

//default constructor (when no params used)
GoodJimi::GoodJimi()
    : name{"Jimi"}, hasBlade{true}, age{3} {};

std::string GoodJimi::getName() {return this->name;}
bool GoodJimi::getHasBlade() {return this->hasBlade;}
int GoodJimi::getAge() {return this->age;}

int main() {
    GoodJimi no_param_jimi;
    GoodJimi param_jimi ("ha", false, 1);
    std::cout << "Initizalize without params " << no_param_jimi.getName() << '\n';
    std::cout << "With params " << param_jimi.getName() << '\n';
    return 0;
}