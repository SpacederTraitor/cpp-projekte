#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int zahl1 = 0;
    int zahl2 = 0;
    int summe = 0;
    int zwischensumme = 0;
    int a=0;
    int falsch = 0;
    int richtig = 0;
    int rechenzeichen = 0;
    int idee = 0;
    int umsetzung = 0;
    int einsetzen = 0;
    int roboter = 0;
    int schicken = 0;


    cout << "Kopfrechentrainer" << endl;
    cout << "Bitte bestätigen Sie das sie kein Roboter sind mit der Eingabe der Taste 1" << endl;
                cin >> roboter;
    if(1==roboter){
        cout << "Vielen Dank" << endl;
    }
    else{
        return 0;
    }

    do{
        cout << "Bitte geben Sie die erste Zahl ein" << endl;
        cin >> zahl1;
        cout << "Bitte geben Sie die zweite Zahl ein" << endl;
        cin >> zahl2;
        cout << "Bitte geben Sie ein Rechenzeichen ein" << endl;
        cout << "Wähle eine Option aus:" << endl;
        cout << "1) +" << endl;
        cout << "2) -" << endl;
        cout << "3) *" << endl;
        cout << "4) /" << endl;
        cin >> rechenzeichen;
        cout << "Bitte geben Sie das Ergenis ein" << endl;
        cin >> summe;

        switch (rechenzeichen) {
        case 1:
            zwischensumme = zahl1 + zahl2;
            break;
        case 2:
            zwischensumme = zahl1 - zahl2;
            break;
        case 3:
            zwischensumme = zahl1 * zahl2;
            break;
        case 4:
            zwischensumme = zahl1 / zahl2;
            break;
        }

        if(summe == zwischensumme){
            cout << "Sie haben richtig gerechnet" << endl;
            richtig = richtig + 1;
        }
        else{
            cout << "Sie haben nicht richtig gerechnet" << endl;
            falsch = falsch +1;
        }
        cout << "Punkteausgabe:" << endl;
        cout << "Richtig: " << richtig << endl;
        cout << "Falsch: " << falsch << endl;
        cout << "Wenn Sie nochmal rechen wollen geben sie bitte die 1 ein. Wenn sie aufhören möchten geben sie eine 2 ein." << endl;
                    cin >> a;
    }while(1==a);

    cout << "Endstand:" << endl;
    cout << "Richtig: " << richtig << endl;
    cout << "Falsch: " << falsch << endl;
    cout << "Bitte bewerten Sie den Kopfrechner!" << endl;
    cout << "Bitte bewerten Sie die folgenden Fragen mit den Zahlen 1-5. Die Zahlen stehen für die jeweiligen Sterne mit denen Sie bewerten möchten." << endl;
    cout << "Wie finden Sie die Idee der des Kopfrechners?" << endl;
    cin >> idee;
    cout << "Wie finden Sie die Umsetzung des Rechners?" << endl;
    cin >> umsetzung;
    cout << "War es für Sie einfach die Zahlen einzusetzen?" << endl;
    cin >>einsetzen;
    cout << "Zusammenfassung Ihrer Bewertung:" << endl;
    cout << "Idee:  " << idee << "  Umsetzung  " << umsetzung << "  Einsetzen  "<< einsetzen << endl;
    cout << "Möchten Sie die Bewertung abschicken? Dann drücken Sie bitte die 1, wenn sie dies nicht tun möchten drücken Sie bitte die 2" << endl;
    cin >> schicken;
    if(1== schicken){
        cout << "Sie haben erfolgreich die Bewerung abgeschickt." << endl;
    }
    else{
        cout << "Sie haben die Bewertung nicht abgeschickt." << endl;
    }
    cout << "Vielen Dank für das Benutzen des Kopfrechners" << endl;
    cout << "Bitte empfehlen Sie diesen Weiter" << endl;
    return 0;
}
