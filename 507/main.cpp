#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Geben Sie eine Zeichenkette ein!: ";
    cin >> input;

    int position;
    cout << "Geben Sie die Position des zu löschenden Zeichens ein: ";
    cin >> position;


    if (position >= 0 && position < input.length()) {

    input.erase(position, 1);
    cout << "Nach dem Löschen: " << input << endl;
    } else {
    cout << "Ungültige Position" << endl;
    }

    return 0;
}
