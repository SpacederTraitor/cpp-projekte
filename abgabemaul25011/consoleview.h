#ifndef CONSOLEVIEW_H
#define CONSOLEVIEW_H

class OrderController;

class ConsoleView
{
public:
    ConsoleView(OrderController &controller);
    void run();

private:
    OrderController &m_controller;
    void showMenu();
    void handleAdd();
    void handleRemove();
    void handleList();
};

#endif
