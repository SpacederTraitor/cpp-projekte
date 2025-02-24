#include <iostream>

using namespace std;

int main()
{
    int bananen;
    int computer;
    int waschmaschinen;
    int blumen;
    double summeohnesteuern;
    double summemitsteuern;

    cout << "Einkaufsliste" << endl;
    cout << "Wie viele Bananen wollen Sie kaufen?" << endl;
    cout << "Bananen: ";
    cin >> bananen;
    cout << "Wie viele Computer wollen Sie kaufen?" << endl;
    cout << "Computer: ";
    cin >> computer;
    cout << "Wie viele Waschmaschinen wollen Sie kaufen?" << endl;
    cout << "Waschmaschinen: ";
    cin >> waschmaschinen;
    cout << "Wie viele Blumen wollen Sie kaufen?" << endl;
    cout << "Blumen: ";
    cin >> blumen;

    summeohnesteuern = bananen * 1.19 + computer * 470 + waschmaschinen * 150.79 + blumen * 3.99;
    cout << "Preis(Netto)   :" << summeohnesteuern << endl;
    summemitsteuern = bananen * 1.19 * 1.07 + computer * 470 * 1.19 + waschmaschinen * 150.79 * 1.19 + blumen * 3.99 * 1.19;
    cout << "Preis(Brutto)  :" << summemitsteuern << endl;
    return 0;
}
