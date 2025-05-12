#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include "rechner.h"
#include "data.h"

using namespace std;
class UserInterface
{
public:
    UserInterface();
    void mainLoop();

private:
    Rechner myRechner;
    Data* myData;
};

#endif // USERINTERFACE_H
