#ifndef LAKEENTRY_H
#define LAKEENTRY_H

#include <QString>

class LakeEntry {
public:
    LakeEntry(const QString& name = "", int temp = 0, int visitors = 0);

    QString name() const;
    int temperature() const;
    int visitorCount() const;

    void setName(const QString& name);
    void setTemperature(int temp);
    void setVisitorCount(int visitors);

private:
    QString m_name;
    int m_temperature;
    int m_visitorCount;
};

#endif // LAKEENTRY_H
