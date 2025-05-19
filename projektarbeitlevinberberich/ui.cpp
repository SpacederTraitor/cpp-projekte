#include <iostream>
#include "ui.h"


using namespace std;

void Ui::eingabe() {
    int zahl1 = 0;
    int zahl2 = 0;
    char auswahl;

    cout << "Bitte geben Sie Zahl1 ein: ";
    cin >> zahl1;
    cout << "Bitte geben Sie Zahl2 ein: ";
    cin >> zahl2;
    myRechner.setZahl1(zahl1);
    myRechner.setZahl2(zahl2);
    cin >> auswahl;
    switch(auswahl) {
    case '1':
        myRechner.add();
        break;
    case '2':
        myRechner.sub();
        break;
    case '3':
        myRechner.mul();
        break;
    case '4':
        myRechner.div();
        break;
    case '5':
        myRechner.pow();
        break;
    case '6':
        myRechner.wurzel();
        break;
    case '7':
        myRechner.andberechnung();
        break;
    case '8':
        myRechner.orberechnung();
        break;
    case '9':
        myRechner.nand();
        break;

    }
    cout << "Ergebnis: " << myRechner.getErgebnis() << endl;
}
