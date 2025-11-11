#include "controllerlake.h"

ControllerLake::~ControllerLake() {
    for (auto* p : launcherStandardType) delete p;
    launcherStandardType.clear();
}

void ControllerLake::createLauncherStandardType(unsigned short days) {
    auto* t = new LauncherStandardType(inventarNrGlobal++);
    t->setLeaseDays(days);
    launcherStandardType.push_back(t);
}

void ControllerLake::createLauncherLuxuriousType(unsigned short hours,
                                                 const QString& farbeGestell,
                                                 const QString& farbeBezug,
                                                 unsigned short kissen) {
    auto* t = new LauncherLuxuriousType(inventarNrGlobal++);
    t->setLeaseHours(hours);
    t->setColors(farbeGestell, farbeBezug);
    t->setAnzahlKissen(kissen);
    launcherStandardType.push_back(t);
}

QStringList ControllerLake::serializeAll() const {
    QStringList out;
    for (auto* p : launcherStandardType) {
        if (!p) continue;
        if (p->isLuxurious()) {
            auto* lux = static_cast<LauncherLuxuriousType*>(p);
            out << lux->serialize();
        } else {
            out << p->serialize();
        }
    }
    return out;
}
