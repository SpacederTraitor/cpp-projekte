#include <iostream>
#include "ui.h"

using namespace std;

// Hier kommt die Hauptmethode, wo du mit dem Programm quatschst
void Ui::eingabe() {
    int zahl1 = 0;
    int zahl2 = 0;
    char auswahl;

    // Zeigt was von der letzten Eingabe noch da ist
    cout << "Aktuelle Werte von letzter Eingabe: Zahl 1 = " << myRechner.getZahl1() << ", Zahl 2 = " << myRechner.getZahl2() << ", Ergebnis = " << myRechner.getErgebnis() << endl;

    // Fragt nach zwei Zahlen
    cout << "Bitte geben Sie Zahl1 ein: ";
    cin >> zahl1;
    cout << "Bitte geben Sie Zahl2 ein: ";
    cin >> zahl2;
    // Speichert die eingegebenen Zahlen im Rechner
    myRechner.setZahl1(zahl1);
    myRechner.setZahl2(zahl2);
    // Fragt nach Rechenmethode
    cout << "Wählen Sie eine Rechenart: 1=Add, 2=Sub, 3=Mul, 4=Div, 5=Wurzel, 6=AND, 7=OR, 8=NAND: ";
    cin >> auswahl;

    // Schaut was ausgewählt wurde und ruft dann die Methode auf
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

    // Zeigt das Ergebnis der Berechnung
    cout << "Ergebnis: " << myRechner.getErgebnis() << endl;
}

// Lädt alte Werte aus der Textdatei
void Ui::loadData() {
    myRechner.loadFromText();
}
