#include "ItalianChef.h"
#include <iostream>

int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "name of the Italian Chef is " << italianChef.getName() << std::endl;

    return 0;
}
