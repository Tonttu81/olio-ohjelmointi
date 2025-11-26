#include "car.h"

Car::Car(string newBrand, string newModel) {
    brand = newBrand;
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(string newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(string newModel)
{
    model = newModel;
}


void Car::setEngine()
{
    objEngine = make_unique<Engine>(150, 2.0);
}

void Car::setWheels()
{
    objWheel1 = make_unique<Wheel>(17, "kesarengas");
    objWheel2 = make_unique<Wheel>(17, "kesarengas");
    objWheel3 = make_unique<Wheel>(17, "kesarengas");
    objWheel4 = make_unique<Wheel>(17, "kesarengas");
}

void Car::printDetails()
{
    cout << "Auto: " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine->getHorsePower() << " hp, " << objEngine->getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1->getSize() << " tuumaa, " << objWheel1->getType() << endl;
    cout << "Rengas 2: " << objWheel2->getSize() << " tuumaa, " << objWheel2->getType() << endl;
    cout << "Rengas 3: " << objWheel3->getSize() << " tuumaa, " << objWheel3->getType() << endl;
    cout << "Rengas 4: " << objWheel4->getSize() << " tuumaa, " << objWheel4->getType() << endl;
}

