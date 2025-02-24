#include <iostream>
#include <string>

using namespace std;

int main()
{
    string vorname;
    string nachname;
    double alter;
    string straße;

    cout << "Kontaktformular" << endl;
    cout << "Bitte geben Sie ihre Daten im folgenden Formular ein" << endl;

    cout << "Vorname:" << endl;
    cin >> vorname;

    cout << "Nachname:" << endl;
    cin >> nachname;

    do {
        cout << "Bitte geben Sie ihr Alter ein:" << endl;
        cin >> alter;
        if(alter < 16){
            cout << "Die Eingabe ist nicht gültig!";
                    cin >> alter;
        }
    }while(alter < 16);


    return 0;
}
