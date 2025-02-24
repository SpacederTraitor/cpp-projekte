#include <iostream>

using namespace std;

int main()
{
    int note;

    cout << "Notenberechnung. Bitte geben Sie ihre Notenpunkte ein:" << endl;
    cin >> note;
    switch (note) {
    case 0:
        cout << "Note: 6" << endl;
        break;
    case 1:
        cout << "Note: 5-" << endl;
        break;
    case 2:
        cout << "Note: 5" << endl;
        break;
    case 3:
        cout << "Note: 5+" << endl;
        break;
    case 4:
        cout << "Note: 4-" << endl;
        break;
    case 5:
        cout << "Note: 4" << endl;
        break;
    case 6:
        cout << "Note: 4+" << endl;
        break;
    case 7:
        cout << "Note: 3-" << endl;
        break;
    case 8:
        cout << "Note: 3" << endl;
        break;
    case 9:
        cout << "Note: 3+" << endl;
        break;
    case 10:
        cout << "Note: 2-" << endl;
        break;
    case 11:
        cout << "Note: 2" << endl;
        break;
    case 12:
        cout << "Note: 2+" << endl;
        break;
    case 13:
        cout << "Note: 1-" << endl;
        break;
    case 14:
        cout << "Note: 1" << endl;
        break;
    case 15:
        cout << "Note: 1+" << endl;
        break;
    default:
        cout << "Ihre Eingabe ist Ungültig" << endl;
        break;
    }

    return 0;
}
