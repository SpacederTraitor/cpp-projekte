#ifndef MODEL_H
#define MODEL_H

#include <fstream>
#include <QString>
#include <QStringList>

using namespace std;

class Model
{
public: //Interface
    Model();
    void fileOpenRead();
    void fileOpenWrite();
    void fileClose();
    void fileWrite(string inFile);
    string fileRead();

    string getFileName();
    void setFileName(string newFileName);

private:
    fstream myFile1;
    string fileName;
};

#endif // MODEL_H
