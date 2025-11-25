#include "lakeentry.h"

LakeEntry::LakeEntry(const QString& name, int temp, int visitors)
    : m_name(name), m_temperature(temp), m_visitorCount(visitors) {}

QString LakeEntry::name() const { return m_name; }
int LakeEntry::temperature() const { return m_temperature; }
int LakeEntry::visitorCount() const { return m_visitorCount; }

void LakeEntry::setName(const QString& name) { m_name = name; }
void LakeEntry::setTemperature(int temp) { m_temperature = temp; }
void LakeEntry::setVisitorCount(int visitors) { m_visitorCount = visitors; }
