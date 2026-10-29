#include <iostream>

using namespace std;

int main()
{
    cout << "Notendurchschnittrechnungsprogramm" << endl;
    int noteDeutsch;
    int noteMathe;
    int noteSport;
    int noteReligion;
    double notenDurchschnitt;

    cout << "Bitte geben Sie Ihre Deutsch Note ein: ";
    cin >> noteDeutsch;
    cout << "Bitte geben Sie Ihre Mathe Note ein: ";
    cin >> noteMathe;
    cout << "Bitte geben Sie Ihre Sport Note ein: ";
    cin >> noteSport;
    cout << "Bitte geben Sie Ihre Religion Note ein: ";
    cin >> noteReligion;

    notenDurchschnitt = noteDeutsch + noteMathe + noteSport + noteReligion;
    notenDurchschnitt = notenDurchschnitt / 4;

    cout << "Dein Notendurchnschnitt beträgt: " << notenDurchschnitt;

    return 0;
}
