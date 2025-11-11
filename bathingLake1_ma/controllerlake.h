#ifndef CONTROLLERLAKE_H
#define CONTROLLERLAKE_H

#include <vector>
#include <QString>
#include <QStringList>
#include "launcheratandardtype.h"
#include "launcherluxurioustype.h"

class ControllerLake {
public:
    ControllerLake() = default;
    ~ControllerLake();

    void createLauncherStandardType(unsigned short days = 1);
    void createLauncherLuxuriousType(unsigned short hours = 1,
                                     const QString& farbeGestell = {},
                                     const QString& farbeBezug = {},
                                     unsigned short kissen = 0);

    QStringList serializeAll() const;

private:
    std::vector<LauncherStandardType*> launcherStandardType;
    unsigned long inventarNrGlobal = 1;
};

#endif // CONTROLLERLAKE_H
