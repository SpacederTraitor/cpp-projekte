#include "TomlWriter.h"
#include <fstream>
#include <iostream>

using namespace std;

/**
 * @brief Fügt einen Eintrag zu einer Sektion hinzu.
 */
void TomlWriter::addValue(const string& section, const string& key, const string& value) {
    data[section][key] = value;
}

/**
 * @brief Schreibt die gespeicherten Daten in eine TOML-Datei.
 */
void TomlWriter::writeFile() const {
    ofstream file(OUTPUT_FILE);
    for (const auto& section : data) {
        file << "[" << section.first << "]\n";
        for (const auto& kv : section.second) {
            file << kv.first << " = \"" << kv.second << "\"\n";
        }
        file << "\n";
    }

    file.close();

}
