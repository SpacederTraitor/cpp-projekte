#include "person.h"


Person::Person() {}

int Person::getPersonenanzahl(){
    personenanzahl = rand() %51;
    return personenanzahl;
}
