#include <iostream>
#include "ui.h"


using namespace std;

void Ui::eingabe() {
    int zahl1 = 0;
    int zahl2 = 0;
    int ergebnis = 0;

    cout << "Bitte geben Sie Zahl1 ein: ";
    cin >> zahl1;
    cout << "Bitte geben Sie Zahl2 ein: ";
    cin >> zahl2;
    myData->setZahl1(zahl1);
    myData->setZahl2(zahl2);
    myRechner.add();
    cout << "Summe: " << myData->getSumme();
}
