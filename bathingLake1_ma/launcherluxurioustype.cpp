#include "launcherluxurioustype.h"

LauncherLuxuriousType::LauncherLuxuriousType(unsigned long newInventoryNr)
    : LauncherStandardType(newInventoryNr)
{
    setType(LauncherType::Luxurious);
}

void LauncherLuxuriousType::setLeaseHours(unsigned short hours) { leaseHours = hours; }
void LauncherLuxuriousType::setColors(const QString& gestell, const QString& bezug) {
    farbeGestell = gestell; farbeBezug = bezug;
}
void LauncherLuxuriousType::setAnzahlKissen(unsigned short kissen) { anzahlKissen = kissen; }

unsigned short LauncherLuxuriousType::getLeaseHours() const { return leaseHours; }
unsigned short LauncherLuxuriousType::getAnzahlKissen() const { return anzahlKissen; }
QString LauncherLuxuriousType::getFarbeGestell() const { return farbeGestell; }
QString LauncherLuxuriousType::getFarbeBezug() const { return farbeBezug; }

QString LauncherLuxuriousType::serialize() const {
    QString s = "Liege, Typ luxuriös, Nr " + QString::number(inventoryNr);
    s.append(", Zustand neuwertig");
    if (!farbeGestell.isEmpty()) s.append(", Farbe ").append(farbeGestell);
    if (!farbeBezug.isEmpty())   s.append(", Polster ").append(farbeBezug);
    if (anzahlKissen > 0)        s.append(", ").append(QString::number(anzahlKissen)).append(" Kissen");
    s.append(", gebucht für ").append(QString::number(leaseHours));
    s.append(leaseHours == 1 ? " Stunde." : " Stunden.");
    return s;
}
