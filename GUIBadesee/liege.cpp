#include "liege.h"

int Liege::nextId = 1;

Liege::Liege(BeachLoungerType t) {
    model = t;
    condition = conditionNew;
    usages = 0;
    id = nextId;
    nextId++;
}

int Liege::getId() { return id; }
BeachLoungerType Liege::getType() { return model; }
conditionType Liege::getCondition() { return condition; }
int Liege::getUsages() { return usages; }

void Liege::useOnce() {
    usages++;
    if (usages % 1000 == 0) degradeOne();
    if (usages % 10000 == 0) condition = conditionDefective;
}

void Liege::degradeOne() {
    if (condition == conditionNew) condition = conditionAsGoodAsNew;
    else if (condition == conditionAsGoodAsNew) condition = conditionUsed;
    else if (condition == conditionUsed) condition = conditionWorn;
    else if (condition == conditionWorn) condition = conditionDiscarded;
}

bool Liege::repair() {
    if (condition == conditionDefective) {
        condition = conditionUsed;
        return true;
    }
    return false;
}

bool Liege::polish() {
    if (condition == conditionDiscarded) return false;
    if (condition == conditionWorn) condition = conditionUsed;
    else if (condition == conditionUsed) condition = conditionAsGoodAsNew;
    else if (condition == conditionAsGoodAsNew) condition = conditionNew;
    return true;
}

string Liege::condToStr(conditionType c) {
    switch (c) {
    case conditionNew: return "neu";
    case conditionAsGoodAsNew: return "neuwertig";
    case conditionUsed: return "gebraucht";
    case conditionWorn: return "abgenutzt";
    case conditionDefective: return "defekt";
    case conditionDiscarded: return "Schrott";
    default: return "unknown";
    }
}

string Liege::typeToStr(BeachLoungerType t) {
    switch (t) {
    case BeachLoungerTypeBeachLoungerSimple: return "Liege Simple";
    case BeachLoungerTypeBeachLoungerLuxury: return "Liege Premium";
    case BeachLoungerTypeBeachLoungerWidthUmbrella: return "Liege mit Schirm";
    case BeachLoungerTypeBeachLoungerWidthService: return "Liege mit Service";
    case BeachLoungerTypeBeachLoungerWidthUmbrellaAndService: return "Liege mit Schirm+Service";
    default: return "Unknown";
    }
}
