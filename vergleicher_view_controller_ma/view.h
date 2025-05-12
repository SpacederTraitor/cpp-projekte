#ifndef VIEW_H
#define VIEW_H

#include <string>
#include <iostream>
#include "controller.h"

using namespace std;

class View
{
public:
    View();

    void ablauf();
    void meldung(string text);

private:
    Controller *myController;

    int eingabe(string displayText);
    void ausgabe();
};

#endif // VIEW_H
