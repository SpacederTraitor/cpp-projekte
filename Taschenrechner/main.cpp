#include <iostream>

using namespace std;

int main()
{
    int zahl1, zahl2, summe1;

    cout << "Taschenrechner fuer Addieren. Gib als erstes deine erste Zahl fuer deine Rechnung ein und bestaetige diese mit Enter." << endl;
    cin >> zahl1;
    cout << "Geben sie jetzt die zweite Zahl ein." << endl;
    cin >> zahl2;
    summe1 = zahl1 + zahl2;

    cout << " Das Ergebnis von deiner Rechnung ist: " << summe1 << endl;
    return 0;
}
