#ifndef LAUNCHERLUXURIOUSTYPE_H
#define LAUNCHERLUXURIOUSTYPE_H

#include "launcheratandardtype.h"
#include <QString>

class LauncherLuxuriousType : public LauncherStandardType {
public:
    // keine 'explicit'
    LauncherLuxuriousType(unsigned long newInventoryNr);

    void setLeaseHours(unsigned short hours);
    void setColors(const QString& gestell, const QString& bezug);
    void setAnzahlKissen(unsigned short kissen);

    unsigned short getLeaseHours() const;
    unsigned short getAnzahlKissen() const;
    QString getFarbeGestell() const;
    QString getFarbeBezug() const;

    // gleichnamige Methode, kein 'virtual'
    QString serialize() const;

private:
    unsigned short leaseHours = 0;
    unsigned short anzahlKissen = 0;
    QString farbeGestell;
    QString farbeBezug;
};

#endif // LAUNCHERLUXURIOUSTYPE_H
