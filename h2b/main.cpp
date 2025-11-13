#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Toyota", "Corolla", 1984);
    carList.emplace_back("Subaru", "Impreza", 2002);
    carList.emplace_back("Toyota", "Celica", 2000);

    cout << "Toinen alkio: ";
    carList[1].printData();

    cout << "Kaikki autot: " << endl;
    for (const Car &car: carList) {
        car.printData();
    }

    return 0;
}
