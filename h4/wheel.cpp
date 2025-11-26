#include "wheel.h"

Wheel::Wheel(int newSize, string newType) {
    size = newSize;
    type = newType;
}

int Wheel::getSize() {
    return size;
}

void Wheel::setSize(int newSize) {
    size = newSize;
}

string Wheel::getType() {
    return type;
}

void Wheel::setType(string newType) {
    type = newType;
}
