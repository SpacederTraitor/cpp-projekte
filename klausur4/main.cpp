#include <iostream>
#include <string>
using namespace std;

int main () {
    string txt = "Hello World!";
    char zahlen;
    int buchstabe;

    cin >> buchstabe;
    zahlen = txt.at(buchstabe);

    cout << "Zahlen " << zahlen << endl;
    return 0;
}
