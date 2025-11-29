#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

#include "engine.h"
#include "wheel.h"

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;
public:
    Car();
    Car(string m, string b);

    void setEngine();
    void setWheels();


    string getModel() const;
    void setModel(const string &mm);

    string getBrand() const;
    void setBrand(const string &b);

    void printDetails() const;
};

#endif // CAR_H
