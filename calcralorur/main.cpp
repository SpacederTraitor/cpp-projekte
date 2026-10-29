#include <iostream>

using namespace std;

int main()
{
    int zahl1;
    int zahl2;
    int summe;

    cout << "Taschnerechner" << endl;
    cout << "Bitte Zahl 1 eingeben: " << endl;
    cin >> zahl1;
    cout << "Bitte Zahl 2 eingeben: " << endl;
    cin >> zahl2;
    summe = zahl1 + zahl2;
    cout << "Summe: " << summe;
    return 0;
}
