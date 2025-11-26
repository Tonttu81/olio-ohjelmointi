#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <memory>

#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
private:
    unique_ptr<Engine> objEngine;
    unique_ptr<Wheel> objWheel1;
    unique_ptr<Wheel> objWheel2;
    unique_ptr<Wheel> objWheel3;
    unique_ptr<Wheel> objWheel4;

    string model;
    string brand;
public:
    Car(string, string);

    string getModel() const;
    void setModel(string newModel);
    string getBrand() const;
    void setBrand(string newBrand);

    void setEngine();
    void setWheels();
    void printDetails();
};

#endif // CAR_H
