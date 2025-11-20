#include "italianchef.h"

ItalianChef::ItalianChef(string value) : Chef(value) {
    cout << "Italian Chef " << name << " constructor." << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << name << " destructor." << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta." << endl;
}

string ItalianChef::getName() {
    return name;
}
