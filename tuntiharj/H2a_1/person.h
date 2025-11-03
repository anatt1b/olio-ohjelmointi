#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;
class Person
{
private:

public:
    Person();
    ~Person();
    // jäsen muuttujat yleensä private
    int ika;
    string nimi;
};

#endif // PERSON_H
