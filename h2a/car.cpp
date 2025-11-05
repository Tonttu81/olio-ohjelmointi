#include "car.h"

void Car::printData() {
    std::cout << yearModel << " " << brand << " " << model << endl;
}

void Car::setBrand(std::string newBrand) {
    brand = newBrand;
}

void Car::setModel(std::string newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}
