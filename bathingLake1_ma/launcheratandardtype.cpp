#include "launcheratandardtype.h"

LauncherStandardType::LauncherStandardType(unsigned long newInventoryNr)
    : inventoryNr(newInventoryNr) {}

unsigned long LauncherStandardType::getInventoryNr() const { return inventoryNr; }

void LauncherStandardType::setLeaseDays(unsigned short days) { leaseDays = days; }

unsigned short LauncherStandardType::getLeaseDays() const { return leaseDays; }

QString LauncherStandardType::serialize() const {
    QString s = "Liege, Typ Standard, Nr " + QString::number(inventoryNr);
    s.append(", Zustand neuwertig, gebucht für ");
    s.append(QString::number(leaseDays));
    s.append(leaseDays == 1 ? " Tag." : " Tage.");
    return s;
}
