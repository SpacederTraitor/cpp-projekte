#include <iostream>
#include <string>
#include "OrderController.h"

void printMenu() {
    std::cout << "\n=== Kiosk-Bestellungen ===\n";
    std::cout << "1) Neue Bestellung anlegen\n";
    std::cout << "2) Alle Bestellungen anzeigen\n";
    std::cout << "3) Bestellung loeschen\n";
    std::cout << "4) Bestellung suchen\n";
    std::cout << "0) Beenden\n";
    std::cout << "Auswahl: ";
}

int main() {
    OrderController controller;
    bool running = true;

    while (running) {
        printMenu();

        std::string line;
        if (!std::getline(std::cin, line)) {
            std::cout << "\nEingabe beendet.\n";
            break;
        }

        if (line.empty()) {
            std::cout << "Bitte etwas eingeben.\n";
            continue;
        }

        int choice = -1;
        try {
            choice = std::stoi(line);
        } catch (...) {
            std::cout << "Ungueltige Eingabe.\n";
            continue;
        }

        switch (choice) {
        case 0:
            std::cout << "Programm wird beendet.\n";
            running = false;
            break;

        case 1: {
            std::string text;
            std::cout << "Bestelltext eingeben: ";
            std::getline(std::cin, text);
            controller.createOrder(text);
            std::cout << "Bestellung wurde angelegt.\n";
            break;
        }

        case 2:
            controller.showAllOrders();
            break;

        case 3: {
            std::cout << "Nummer der zu loeschenden Bestellung: ";
            std::string nrLine;
            std::getline(std::cin, nrLine);
            int nr = -1;
            try {
                nr = std::stoi(nrLine);
            } catch (...) {
                std::cout << "Ungueltige Nummer.\n";
                break;
            }
            if (controller.cancelOrder(nr)) {
                std::cout << "Bestellung #" << nr << " geloescht.\n";
            } else {
                std::cout << "Keine Bestellung mit dieser Nummer gefunden.\n";
            }
            break;
        }

        case 4: {
            std::cout << "Nummer der Bestellung: ";
            std::string nrLine;
            std::getline(std::cin, nrLine);
            int nr = -1;
            try {
                nr = std::stoi(nrLine);
            } catch (...) {
                std::cout << "Ungueltige Nummer.\n";
                break;
            }
            const Order* o = controller.findOrder(nr);
            if (o) {
                o->print();
            } else {
                std::cout << "Keine Bestellung mit dieser Nummer gefunden.\n";
            }
            break;
        }

        default:
            std::cout << "Bitte eine gueltige Option waehlen.\n";
            break;
        }
    }

    return 0;
}
