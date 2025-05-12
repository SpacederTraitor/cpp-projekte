#include "controller.h"
#include "view.h"

Controller::Controller() {
}

/**
 * @brief vergleiche Zahl 1 und Zahl2
 *
 * Vergleiche die zwei Zahlen miteinander.
 * Bei identisch greift else.
 */
void Controller::vergleiche(){
    if(zahl1 > zahl2){
        gross = zahl1;
        klein = zahl2;
    }
    else{
        gross = zahl2;
        klein = zahl1;
    }
}

void Controller::setZahl1(int newZahl1){
    zahl1 = newZahl1;
}

void Controller::setZahl2(int newZahl2){
    zahl2 = newZahl2;
}

int Controller::getKlein(){
    return klein;
}

int Controller::getGross(){
    return gross;
}
