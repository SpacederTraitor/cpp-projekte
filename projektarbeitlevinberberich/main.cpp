#include "ui.h"

using namespace std;

int main() {
    Ui myUi; // Macht ein UI-Objekt
    myUi.loadData(); // Lädt alte Werte aus der Textdatei
    myUi.eingabe(); // Startet die Eingabe
    return 0;
}
