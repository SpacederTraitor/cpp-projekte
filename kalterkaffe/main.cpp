#include <iostream>

using namespace std;

int main()
{
    double temperatur = 85;
    double differenz;
    double temperaturabzug;
    double ergebnis;
    int start;

    cin >> start;
    while (20 >= temperatur) {
        differenz = temperatur-20;
        temperaturabzug = differenz / 10;
        ergebnis = temperatur - temperaturabzug;
    }

    cout << ergebnis;


    return 0;



}
