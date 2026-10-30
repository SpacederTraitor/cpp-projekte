#include <iostream>

using namespace std;

int main()
{
    string userName1;
    string userName2;
    string zwischenSpeicher1;

    cout << "Usernamenüberprüfungsprogramm" << endl;
    cout << "Bitte geben Sie den ersten Usernamen ein: ";
    cin >> userName1;
    cout << "Bitte geben Sie den zweiten Usernamen ein: ";
    cin >> userName2;

    if(userName1 == userName2){
        cout << "Die Eingabe war nicht erfolgreich!" << endl;
    }
    else{
        cout << " Die Eingabe war erfolgreich!" << endl;
        if(userName2 < userName1){
            zwischenSpeicher1 = userName2;
            userName2 = userName1;
            userName1 = zwischenSpeicher1;
        }
    }
    cout << "Folgende Usernamen habe ich gespeichert: " << userName1 << " und " << userName2;
    return 0;
}

