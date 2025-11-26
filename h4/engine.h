#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine(int, double);
    int getHorsePower();
    void setHorsePower(int);
    double getDisplacement();
    void setDisplacement(double);
};

#endif // ENGINE_H
