#ifndef GUI_H
#define GUI_H

#include "See.h"

class GUI {
private:
    See* see;

public:
    bool liegeMietenGanzerTag();
    void radAbstellen();

    double wassertemperaturAktuellAnsehen();
    unsigned short wasserqualitaetAktuellAnsehen();
    int anzBesucherAktuellAnsehen();
};

#endif
