#include "lakeentrylist.h"

LakeEntryList::LakeEntryList() {}

void LakeEntryList::add(const LakeEntry& entry) {
    m_entries.append(entry);
}

int LakeEntryList::count() const {
    return m_entries.size();
}

LakeEntry LakeEntryList::at(int index) const {
    return m_entries.value(index);
}
