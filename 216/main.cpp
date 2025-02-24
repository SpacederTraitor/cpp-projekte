#include <iostream>

using namespace std;

int main()
{
    long int zahl1;
    long int zahl2;


    cout << "Taschenrechner" << endl;
    cout << "Bitte geben Sie 2 positive Zahlen ein" << endl;
    cout << "Zahl1: " << endl;
    cin >> zahl1;
    cout << "Zahl2 " << endl;
    cin >> zahl2;

    cout << zahl1 << endl;

    while (zahl1 < zahl2) {
        zahl1 = zahl1 + 1;
        cout << zahl1 << endl;
    }

    cout << "Fertig" << endl;




    return 0;
}
