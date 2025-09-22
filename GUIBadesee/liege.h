#ifndef LIEGE_H
#define LIEGE_H

#include <string>
using namespace std;

enum conditionType {
    conditionNew,
    conditionAsGoodAsNew,
    conditionUsed,
    conditionWorn,
    conditionDefective,
    conditionDiscarded,
    conditionUnknown = -1
};

enum BeachLoungerType {
    BeachLoungerTypeBeachLoungerSimple,
    BeachLoungerTypeBeachLoungerLuxury,
    BeachLoungerTypeBeachLoungerWidthUmbrella,
    BeachLoungerTypeBeachLoungerWidthService,
    BeachLoungerTypeBeachLoungerWidthUmbrellaAndService,
    BeachLoungerTypeUnknown = -1
};

class Liege {
public:
    Liege(BeachLoungerType t = BeachLoungerTypeBeachLoungerSimple);

    int getId();
    BeachLoungerType getType();
    conditionType getCondition();
    int getUsages();

    void useOnce();
    bool repair();
    bool polish();

    static string condToStr(conditionType c);
    static string typeToStr(BeachLoungerType t);

private:
    int id;
    BeachLoungerType model;
    conditionType condition;
    int usages;

    static int nextId;
    void degradeOne();
};

#endif
