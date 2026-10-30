#include <iostream>

using namespace std;

int main()
{
    int zahl1;
    int zahl2;
    int zwischenZahl;

    cout << "Variabelentauschprogrammnachgröße" << endl;
    cout << "Bitte geben Sie die erste Zahl zum Sotieren ein: ";
    cin >> zahl1;
    cout << "Bitte geben Sie die zweite Zahl ein: ";
    cin >> zahl2;

    if(zahl2 < zahl1){
        zwischenZahl = zahl2;
        zahl2 = zahl1;;
        zahl1 = zwischenZahl;
    }
    cout << "Die Zahlen wurden Nach größe sortiert: " << endl;
    cout << zahl1 << "und" << zahl2;
    return 0;
}
