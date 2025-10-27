#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << " Anna kokonaisluku: " << endl;
    cin >> num1;
    // Jos kahdella jaettaessa jakojäännös on nolla
    if(num1 % 2 == 0){
        cout << "luku " <<num1<< " on parillinen"<<endl;
    }
    else{
        cout << "luku " <<num1<< " on pariton" << endl;
    }
    return 0;
}
