#include <iostream>
#include "See.h"
#include "GUI.h"
using namespace std;

int main() {
    See see;

    see.addPerson(Person("Berberich", "Levin"));
    see.addPerson(Person("Waltzewekc", "Diego"));

    cout << "Wassertemperatur: " << gui.wassertemperaturAktuellAnsehen() << endl;
    cout << "Wasserqualität: " << gui.wasserqualitaetAktuellAnsehen() << endl;
    cout << "Anzahl Besucher: " << gui.anzBesucherAktuellAnsehen() << endl;

    gui.radAbstellen();

    return 0;
}
