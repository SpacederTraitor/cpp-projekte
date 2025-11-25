#ifndef LAKEENTRYLIST_H
#define LAKEENTRYLIST_H

#include "lakeentry.h"
#include <QList>

class LakeEntryList {
public:
    LakeEntryList();

    void add(const LakeEntry& entry);
    int count() const;
    LakeEntry at(int index) const;

private:
    QList<LakeEntry> m_entries;
};

#endif // LAKEENTRYLIST_H
