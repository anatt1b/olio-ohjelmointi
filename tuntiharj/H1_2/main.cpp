#include <iostream>

using namespace std;

// funktio mikä laskee luvun neliön
int laskeNelio(int luku)
{
    int tulos = luku * luku;
    return tulos;
}

int main()
{
    int luku;
    cout << "Anna luku" << endl;
    cin >> luku;

    int nelio = laskeNelio(luku);

    cout << "Luvun " <<luku<< " neliö on " <<nelio<< endl;

    return 0;
}
