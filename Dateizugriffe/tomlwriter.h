#ifndef TOMLWRITER_H
#define TOMLWRITER_H

#include <string>
#include <map>
#include <vector>

using namespace std;

const string OUTPUT_FILE = "daten.toml";


class TomlWriter {
private:
    map<string, map<string, string>> data;

public:

    void addValue(const string& section, const string& key, const string& value);
    void writeFile() const;
};

#endif
