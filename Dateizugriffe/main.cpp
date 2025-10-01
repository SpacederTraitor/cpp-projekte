#include "TomlWriter.h"
#include <iostream>

using namespace std;

int main() {
    TomlWriter writer;

/**
 * @brief Sektion "Person" mit Daten
 */
    writer.addValue("Person", "Name", "Max Mustermann");
    writer.addValue("Person", "Alter", "25");

/**
 * @brief Sektion "Adresse" mit Daten
 */

    writer.addValue("Adresse", "Stadt", "Kriftel");
    writer.addValue("Adresse", "PLZ", "65830");

/**
 * @brief In TOML-Datei schreiben
 */
    writer.writeFile();

    cout << "Programm beendet.\n";
    return 0;
}
