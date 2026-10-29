#include <iostream>

using namespace std;

int main()
{
    int anzahlSchueler=0;
    int anzahlLehrer=0;
    int anzahlKilometer=0;
    int freiFahrten=0;
    double preisSchueler=0;
    double preisLehrer=0;
    double gesamtPreis=0;

    cout << "Busfahrtkostenberechner für Lehrer und Schüler" << endl;
    cout << "Bitte geben Sie ein, wie viele Lehrer es gibt: ";
    cin >> anzahlLehrer;
    cout << "Bitte geben Sie ein, wie viele Schüler es gibt: ";
    cin >> anzahlSchueler;
    cout << "Bitte geben Sie ein, wie viele Kilometer die Strecke lang ist: ";
    cin >> anzahlKilometer;

    freiFahrten = anzahlSchueler / 10;
    preisSchueler = (anzahlSchueler - freiFahrten) * anzahlKilometer * 0.5;
    preisLehrer = anzahlLehrer * anzahlKilometer * 0.025;
    gesamtPreis = preisLehrer + preisSchueler;

    cout << gesamtPreis;

    return 0;
}
