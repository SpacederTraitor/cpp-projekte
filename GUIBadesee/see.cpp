#include "see.h"

See::See() {}

int See::getWassertemperaturaktuell(){
    wassertemperaturaktuell = rand() %101;
    return wassertemperaturaktuell;
}
