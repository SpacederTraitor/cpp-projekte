#include <iostream>

using namespace std;
int eingabe(){
    int zahl = 0;
    cout << "Bitte geben Sie eine Zahl ein." << endl;
    do{
        cin >> zahl;
    }while(10<zahl);
    return zahl;
}

int main()
{
    int zahl1;
    int zahl2;
    int ergebnis;

    zahl1 = eingabe();
    zahl2 = eingabe();

    ergebnis = zahl1 + zahl2;
    cout << ergebnis;

    return 0;
}
