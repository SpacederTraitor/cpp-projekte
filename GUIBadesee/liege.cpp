#include "liege.h"

int Liege::nextId = 1;

Liege::Liege(BeachLoungerType t) {
    model = t;
    condition = conditionNew;
    id = nextId;
    nextId++;
}

int Liege::getId() { return id; }
BeachLoungerType Liege::getType() { return model; }
conditionType Liege::getCondition() { return condition; }
int Liege::getUsages() { return usages; }



string Liege::condToStr(conditionType c) {
    switch (c) {
    case conditionNew: return "neu";
    case conditionAsGoodAsNew: return "neuwertig";
    case conditionUsed: return "gebraucht";
    case conditionWorn: return "abgenutzt";
    case conditionDefective: return "defekt";
    case conditionDiscarded: return "Schrott";
    }
}

string Liege::typeToStr(BeachLoungerType t) {
    switch (t) {
    case BeachLoungerTypeBeachLoungerSimple: return "Liege Simple";
    case BeachLoungerTypeBeachLoungerLuxury: return "Liege Premium";
    case BeachLoungerTypeBeachLoungerWidthUmbrella: return "Liege mit Schirm";
    case BeachLoungerTypeBeachLoungerWidthService: return "Liege mit Service";
    case BeachLoungerTypeBeachLoungerWidthUmbrellaAndService: return "Liege mit Schirm+Service";
    }
}
