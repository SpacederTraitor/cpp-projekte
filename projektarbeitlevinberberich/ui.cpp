#include <iostream>
#include "ui.h"

using namespace std;

void Ui::eingabe() {
    int zahl1 = 0;
    int zahl2 = 0;
    char auswahl;

    cout << "Aktuelle Werte von letzter Eingabe: Zahl 1 = " << myRechner.getZahl1() << ", Zahl 2 = " << myRechner.getZahl2() << ", Ergebnis = " << myRechner.getErgebnis() << endl;

    cout << "Bitte geben Sie Zahl1 ein: ";
    cin >> zahl1;
    cout << "Bitte geben Sie Zahl2 ein: ";
    cin >> zahl2;
    myRechner.setZahl1(zahl1);
    myRechner.setZahl2(zahl2);
    cout << "Wählen Sie eine Rechenart: 1=Add, 2=Sub, 3=Mul, 4=Div, 5=Wurzel, 6=AND, 7=OR, 8=NAND: ";
    cin >> auswahl;

    switch (auswahl) {
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
        myRechner.wurzel();
        break;
    case '6':
        myRechner.andberechnung();
        break;
    case '7':
        myRechner.orberechnung();
        break;
    case '8':
        myRechner.nand();
        break;
    }

    cout << "Ergebnis: " << myRechner.getErgebnis() << endl;
}

void Ui::loadData() {
    myRechner.loadFromText();
}
