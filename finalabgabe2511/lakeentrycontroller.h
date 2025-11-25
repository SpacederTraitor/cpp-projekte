#ifndef LAKEENTRYCONTROLLER_H
#define LAKEENTRYCONTROLLER_H

#include "lakeentrylist.h"

class LakeEntryController {
public:
    LakeEntryController();

    void addEntry(const LakeEntry& entry);
    LakeEntry currentEntry() const;

    void next();
    void previous();
    void selectIndex(int index);

    int currentIndex() const;
    int size() const;

private:
    LakeEntryList m_entries;
    int m_currentIndex;
};

#endif // LAKEENTRYCONTROLLER_H
