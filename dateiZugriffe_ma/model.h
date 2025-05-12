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
    void fileOpen();
    void fileClose();
    void fileWrite(string inFile);
    string fileRead();

private:
    fstream myFile1;
    string fileName;
};

#endif // MODEL_H
