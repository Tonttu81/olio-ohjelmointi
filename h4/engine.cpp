#include "engine.h"

Engine::Engine(int newHp, double newDisplacement) {
    horsepower = newHp;
    displacement = newDisplacement;
}

int Engine::getHorsePower() {
    return horsepower;
}

void Engine::setHorsePower(int newHp) {
    horsepower = newHp;
}

double Engine::getDisplacement() {
    return displacement;
}

void Engine::setDisplacement(double newDisplacement) {
    displacement = newDisplacement;
}
