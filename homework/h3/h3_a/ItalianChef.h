#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
using namespace std;

#include "Chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(const string& name);
    ~ItalianChef();

    string getName();
    void makePasta();

};

#endif // ITALIANCHEF_H
