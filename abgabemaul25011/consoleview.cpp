#include "consoleview.h"
#include "ordercontroller.h"
#include "order.h"
#include <iostream>
#include <string>
#include <limits>
#include <vector>

static void getlineSafe(std::string &out)
{
    std::getline(std::cin, out);
    if (!out.empty() && out.back() == '\r')
        out.pop_back();
}

static int readInt()
{
    int value;
    while (true) {
        std::cin >> value;
        if (!std::cin.fail())
            break;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ungueltige Eingabe, bitte eine Zahl eingeben: ";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return value;
}

ConsoleView::ConsoleView(OrderController &controller)
    : m_controller(controller)
{
}

void ConsoleView::showMenu()
{
    std::cout << "\n1) Bestellung hinzufuegen\n";
    std::cout << "2) Bestellung loeschen\n";
    std::cout << "3) Bestellungen anzeigen\n";
    std::cout << "4) Beenden\n";
    std::cout << "Auswahl: ";
}

void ConsoleView::handleAdd()
{
    if (m_controller.isFull()) {
        std::cout << "Die Liste ist voll.\n";
        return;
    }

    std::cout << "Bestellungstext eingeben: ";
    std::string text;
    getlineSafe(text);

    if (text.empty()) {
        std::cout << "Leerer Text, keine Bestellung hinzugefuegt.\n";
        return;
    }

    if (m_controller.addOrder(text))
        std::cout << "Bestellung hinzugefuegt.\n";
    else
        std::cout << "Fehler.\n";
}

void ConsoleView::handleRemove()
{
    std::cout << "Bestellnummer eingeben: ";
    int id = readInt();

    if (m_controller.removeOrder(id))
        std::cout << "Bestellung geloescht.\n";
    else
        std::cout << "Nicht gefunden.\n";
}

void ConsoleView::handleList()
{
    auto orders = m_controller.getOrders();
    if (orders.empty()) {
        std::cout << "Keine Bestellungen vorhanden.\n";
        return;
    }

    std::cout << "Aktuelle Bestellungen:\n";
    for (const auto &o : orders)
        std::cout << o.id() << ": " << o.text() << "\n";
}

void ConsoleView::run()
{
    int choice;

    do {
        showMenu();
        choice = readInt();

        switch (choice) {
        case 1: handleAdd(); break;
        case 2: handleRemove(); break;
        case 3: handleList(); break;
        case 4: std::cout << "Beendet.\n"; break;
        default: std::cout << "Ungueltige Auswahl.\n"; break;
        }

    } while (choice != 4);
}
