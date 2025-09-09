#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    string vorname;

public:
    Person(string n, string v);
    string getName();
    string getVorname();
};

#endif
