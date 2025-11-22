#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    {
        Animal animal;
        animal.callOut();  // Eläin ääntelee
    }
    cout<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<endl;

    {
        Dog dog;
        dog.callOut();  // Koira haukkuu
    }
    return 0;
}
