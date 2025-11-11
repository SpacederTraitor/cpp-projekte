#ifndef LAUNCHERATANDARDTYPE_H
#define LAUNCHERATANDARDTYPE_H

#include <QString>

class LauncherStandardType {
public:
    // keine 'explicit'
    LauncherStandardType(unsigned long newInventoryNr);
    ~LauncherStandardType() = default;

    unsigned long getInventoryNr() const;
    void setLeaseDays(unsigned short days);
    unsigned short getLeaseDays() const;

    // keine 'virtual'
    QString serialize() const;

    // runtime tag (manual RTTI) to allow dispatch without virtual/dynamic_cast
    enum class LauncherType { Standard, Luxurious };
    bool isLuxurious() const { return type == LauncherType::Luxurious; }

protected:
    void setType(LauncherType t) { type = t; }

    unsigned long inventoryNr;
    unsigned short leaseDays = 0;
    LauncherType type = LauncherType::Standard;
};

#endif // LAUNCHERATANDARDTYPE_H
