#include <iostream>
#include "userinterface.h"
using namespace std;

int main()
{
    UserInterface ui;
    cout << "Hello World!" << endl;
    ui.mainLoop();
    return 0;
}
