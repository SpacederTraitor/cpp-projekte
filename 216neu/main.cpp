#include <iostream>

using namespace std;

int main()
{
    int zahl1;
    int zahl2;
    int zwischenzahlen;
    int wiederholungen;
    int ergebnis;
    int summe;

    cout << "Summe zwischne zwei Zahlen" << endl;
    cin >> zahl1;
    cin >> zahl2;
    if(1>zahl1){
        cout << "Die erste Zahl ist nicht positiv" << endl;
        return 0;
    }
    if(1>zahl2){
        cout << "Die zweite Zahl ist nicht positiv" << endl;
        return 0;
    }

    zwischenzahlen = zahl2 - zahl1;

    for (int i = zahl1; i < zahl2; i++) {
        summe += i;
    }
    cout << summe;
    return 0;
}
