#include <iostream>
#include <gui.h>
using namespace std;


using namespace std;

int levin(int personen) {
    cout << "Klasse Levin" << endl;
    gui *g = new gui;
    personen = g->setPersonen();
    return personen;

}

int main()
{

    int personen;
    cout << "Hello World!" << endl;
    personen = levin(personen);
    cout << personen;
    return 0;
}


