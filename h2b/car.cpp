#include "car.h"

Car::Car(std::string newBrand, std::string newModel, int newYearModel) {
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}

void Car::printData() const {
    std::cout << yearModel << " " << brand << " " << model << endl;
}
