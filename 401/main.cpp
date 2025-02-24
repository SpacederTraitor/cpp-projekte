#include <iostream>
using namespace std;

int main()
{
    int zahl1;
    int zahl2;
    int summe;
    char rechenzeichen;

    cout << "Taschnechner" << endl;
    cout << "Zahl 1: ";
    cin >> zahl1;
    cout << "Zahl 2: ";
    cin >> zahl2;
    cout << "Rechenzeichen: ";
    cin >> rechenzeichen;

    switch (rechenzeichen){
        case '+':
            summe = zahl1 + zahl2;
            cout << "Ergebnis: " << summe << endl;
            break;
        case '-':
        cout << "Ergebnis: " << zahl1 - zahl2 << endl;
            break;
    }
    return 0;
}
