#include "ordercontroller.h"
#include "consoleview.h"

int main()
{
    OrderController controller;
    ConsoleView view(controller);
    view.run();
    return 0;
}
