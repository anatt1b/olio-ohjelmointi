/*
Muokkaa main-funktiota seuraavasti:
    Kysy luvut ja tallenna ne muuttujiin a ja b
    käytä cin ja cout olioita

Lisää sovellukseen summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
    funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
    funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään.
    jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
    kutsu em. funktioita mainissa antamalla niille argumenttina muuttujat a ja b.

Lisää sovellukseen toiset summan ja osamäärän laskemiseen ja tulostamiseen käytettävät funktiot:
    funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
    funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
*/

#include <iostream>
#include <cmath>

using namespace std;
//funktio ottaa vastaan 2 kokonaislukua ja laskee niiden summan
void calcSum(int a, int b){
    int sum = a + b;
    cout << "\nsumma: "<< sum << endl;
}

// funktio ottaa vastaa 2 kokonaislukua ja laskee niiden osamaaran
void calcDiv(int a, int b){
    if(b <= 0){
        cout << "\nosamaara: Jakaja ei voi olla 0 tai negatiivinen!" << endl;
    }
    else{
        int result = a / b;
        cout << "\nosamaara: "<< result << endl;
    }
}

int retSum(int a, int b){
    int sum = a + b;
    return sum;
}

float retDiv(float a, float b){
    float result;
    if(b <= 0){
        throw std::runtime_error("jakaja ei saa olla nolla tai negatiivinen.");
    }
    else{
        result =  a / b;
    }
    result = round(result *100)/100;
    return result;
}
int main()
{
    int a,b;
    float result;
    cout << "Ensin summataan ja sitten jaetaan" << endl;
    cout << "Anna kaksi kokonaislukua: " << endl;
    cin >> a;
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    result = retSum(a,b);
    cout << "\n" << "retSum : " << a << " + " << b << " = " << result << endl;

    try{
        result = retDiv(a,b);
        cout << "\n" << "retDiv : " << a << " / " << b << " = " << result << endl;
    }
    catch (runtime_error& e){
        cout<<"\nError: "<< e.what()<<endl;
    }

    return 0;
}
