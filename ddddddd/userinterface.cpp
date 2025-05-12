#include "userinterface.h"

UserInterface::UserInterface()
{
    myData = new Data;
    myRechner.setMyData(myData);
}


void UserInterface::mainLoop()
{
    int zahl1 = 0;
    int zahl2 = 0;
    int ergebnis = 0;

    cout << "Eingabe Zahl 1: ";
    cin >> zahl1;
    cout << "Eingabe Zahl 2: ";
    cin >> zahl2;
    myData->setZahl1(zahl1);
    myData->setZahl2(zahl2);
    myRechner.add();
    cout << "Summe: " << myData->getSumme();
}
