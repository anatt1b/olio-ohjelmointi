#include "Chef.h"
#include "ItalianChef.h"

#include <iostream>

using namespace std;

int main()
{
    {
        Chef kokki("Gordon Ramsay");
        kokki.makeSalad();
        kokki.makeSoup();
    }
    cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << endl;
    {
    ItalianChef kokki1("Anthony Bourdain");

    kokki1.makeSalad();
    kokki1.makeSoup();
    kokki1.makePasta();

    cout << "name of the Italian Chef is " << kokki1.getName() << endl;
    }

    return 0;
}
