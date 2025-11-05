#ifndef CAR_H
#define CAR_H

#include <iostream>

using  namespace std;
class Car
{
private:
    string make;
    string model;
    int year;
public:
    Car();
    Car(string, string, int);
        void display();
    ~Car();
};

#endif // CAR_H
