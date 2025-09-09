#ifndef SEE_H
#define SEE_H

#include <random>
#include <vector>

class See
{
public:
    See();
int getWassertemperaturaktuell();
int getWasserqualitaet();


private:
    int wassertemperaturaktuell;
    int wasserqualitaet;
};


#endif // SEE_H
