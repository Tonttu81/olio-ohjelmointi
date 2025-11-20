#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();

    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();
    cout << "Name of Italian Chef: " << anthony.getName() << endl;

    return 0;
}
