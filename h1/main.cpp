#include <iostream>

using namespace std;
//funktio ottaa vastaan 2 kokonaislukua ja laskee niiden summan
void calcSum(int a, int b){
    int sum = a + b;
    cout << "summa: "<< sum << endl;
}

// funktio ottaa vastaa 2 kokonaislukua ja laskee niiden osamaaran
void calcDiv(int a, int b){
    int div = a / b;
    cout << "osamaara: "<< div << endl;
}

int main()
{
    int a,b;
    cout << "Ensin summataan ja sitten jaetaan" << endl;
    cout << "Anna kaksi kokonaislukua: " << endl;
    cin >> a;
    cin >> b;

    calcSum(a, b);
    calcDiv(a,b);
    return 0;
}
