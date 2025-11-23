#include "dog.h"

#include <iostream>
using namespace std;

Dog::Dog() {}

Dog::~Dog() {
    cout << "Koira poistettu" << endl;
}

void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}
