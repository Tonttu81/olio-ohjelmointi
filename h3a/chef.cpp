#include "chef.h"

Chef::Chef(string value) {
    name = value;
    cout << "Chef " << name << " constructor." << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destructor." << endl;
}

void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad." << endl;
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup." << endl;
}
