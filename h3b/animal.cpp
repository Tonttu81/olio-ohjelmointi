#include "animal.h"

#include <iostream>
using namespace std;

Animal::Animal() {}

Animal::~Animal() {
    cout << "Eläin poistettu" << endl;
}

void Animal::callOut() {
    cout << "Eläin ääntelee." << endl;
}
