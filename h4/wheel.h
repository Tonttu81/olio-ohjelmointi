#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel(int, string);
    int getSize();
    void setSize(int);
    string getType();
    void setType(string);
};

#endif // WHEEL_H
