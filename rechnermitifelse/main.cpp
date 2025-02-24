#include <iostream>

using namespace std;

int main()
{
    int zahl1;
    int zahl2;
    int rechenzeichen;
    int summe1;

    cout << "Taschenrechner Addieren und Subtrahieren" << endl;
    cout << "Bitte gebe deine erste Zahl ein." << endl;
    cin >> zahl1;
    cout << "Bitte gebe deine zweite Zahl ein" << endl;
    cin >> zahl2;
    cout << "Bitte gebe dein Rechenzeichen ein ( 1 = Addieren 2 = Subtrahieren)" << endl;
    cin >> rechenzeichen;

    if (1 == rechenzeichen)
    {
    summe1 = zahl1 + zahl2;
        cout << summe1;
    }
    else
    {
        summe1 = zahl1 - zahl2;
        cout << summe1 << endl;
    }
    return 0;
}
