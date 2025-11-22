#include "ItalianChef.h"
#include <iostream>


ItalianChef::ItalianChef(const string &name) : Chef(name)
{
    cout << "ItalianChef " << this->name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << this->name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return this->name;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << this->name << " makes pasta" << endl;
}
