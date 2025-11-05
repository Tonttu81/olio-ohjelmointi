#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    Car car;
    car.setBrand("Subaru");
    car.setModel("Impreza");
    car.setYearModel(2002);
    car.printData();

    Rectangle *rectangle = new Rectangle;
    rectangle->setHeight(10);
    rectangle->setWidth(5);
    cout << "Pinta-ala: " << rectangle->getArea() << endl;
    cout << "Ymparyysmitta: " << rectangle->getCircum() << endl;
    delete rectangle;
    rectangle = nullptr;

    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Teppo Testi");
    student->setStudentNumber(100);
    student->setAverage(9.5);
    cout << "Nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;

    return 0;
}
