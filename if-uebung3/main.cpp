#include <iostream>

using namespace std;

int main()
{
    int anzahlSchueler=0;
    int anzahlLehrer=0;
    int anzahlKilometer=0;
    double schuelerPreis=0;
    double lehrerPreis=0;
    double gesamtPreis=0;
    bool lehrerVorhanden=false;
    cout << "Fahrkostenberechnungsprogramm" << endl;
    cout << "Bitte geben Sie die Anzahl der Schüler ein: ";
    cin >> anzahlSchueler;
    cout << "Bitte geben Sie die Anzahl der Lehrer an";
    cin >> anzahlLehrer;
    cout << "Bitte geben Sie die Anzahl der Kilometer ein: ";
    cin >> anzahlKilometer;

    if(anzahlLehrer == 0){
        lehrerVorhanden = false;
        cout << "Kein Lehrer fährt mit!" << endl;
    }
    else{
        lehrerVorhanden = true;
    }

    schuelerPreis = anzahlSchueler * 0.05 * anzahlKilometer;
    lehrerPreis = anzahlLehrer * 0.05 * anzahlKilometer;
    gesamtPreis = schuelerPreis + lehrerPreis;

    cout << "Der Gesamtpreis beträgt: " << gesamtPreis;


    return 0;
}
