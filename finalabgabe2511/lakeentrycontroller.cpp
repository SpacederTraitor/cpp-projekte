#include "lakeentrycontroller.h"

LakeEntryController::LakeEntryController()
    : m_currentIndex(-1) {}

void LakeEntryController::addEntry(const LakeEntry& entry) {
    m_entries.add(entry);
    if (m_currentIndex < 0) {
        m_currentIndex = 0;
    }
}

LakeEntry LakeEntryController::currentEntry() const {
    if (m_currentIndex < 0 || m_currentIndex >= m_entries.count())
        return LakeEntry();
    return m_entries.at(m_currentIndex);
}

void LakeEntryController::next() {
    if (m_currentIndex < m_entries.count() - 1)
        ++m_currentIndex;
}

void LakeEntryController::previous() {
    if (m_currentIndex > 0)
        --m_currentIndex;
}

void LakeEntryController::selectIndex(int index) {
    if (index >= 0 && index < m_entries.count())
        m_currentIndex = index;
}

int LakeEntryController::currentIndex() const {
    return m_currentIndex;
}

int LakeEntryController::size() const {
    return m_entries.count();
}
