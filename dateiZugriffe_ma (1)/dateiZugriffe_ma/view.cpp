#include "view.h"

View::View() {
    myModel.setFileName("log.txt");
}

/**
 *  @brief Ablaufkontrolle des Programms
 *
 *  Zentrale Methode, die das Programm steuert.
 */
void View::ablauf(){
    int nochmal = 0;
    int tempEingabe = 0;
    string outString;

    do{
        tempEingabe = eingabe("Zahl 1");
        myController.setZahl1(tempEingabe);
        tempEingabe = eingabe("Zahl 2");
        myController.setZahl2(tempEingabe);
        myController.vergleiche();
        ausgabe();
        myModel.fileOpenWrite();

        outString =  "Die kleinere Zahl ist " + to_string(myController.getKlein());
        myModel.fileWrite(outString);
        myModel.fileClose();

        cout << "Noch ein Vergleich starten? Ja = 1; nein = 0" << endl;
        cin >> nochmal;
    }while(0 != nochmal);
}

/**
 * @brief Eingabe der Daten (Zahl1, Zahl2)
 * @param displayText Infotest für Eingabe
 * @return Wert der Eingabe
 *
 * Eingabe eines Werts. der Infotext soll dem User anzeigen welchen Wert er gerade eingibt.
 */
int View::eingabe(string displayText){
    int tempEingabe = 0;

    cout << "Bitte Wert fuer " << displayText << " eingeben" << endl;
    cin >> tempEingabe;
    return tempEingabe;
}

/**
 * @brief Ausgabe des Ergebnis
 *
 * aktuell wird nur die Zahl angezeigt, die die kleinere ist.
 * Wenn beide Zahlen gleich sind wird dies nicht angezeigt.
 */
void View::ausgabe(){
    cout << "Die kleinere Zahl ist " << myController.getKlein() << endl;
}

void View::meldung(string text){
    cout << "Meldung: " << text << endl;
}
