#ifndef CONTROLLER_H
#define CONTROLLER_H

class View;

class Controller
{
public:
    Controller();
    void vergleiche();
    void setZahl1(int newZahl1);
    void setZahl2(int newZahl2);
    int getKlein();
    int getGross();

private:
    int zahl1;
    int zahl2;
    int klein;
    int gross;
};

#endif // CONTROLLER_H
