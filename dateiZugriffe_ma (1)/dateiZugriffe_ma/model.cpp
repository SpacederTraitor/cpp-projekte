#include "model.h"

Model::Model() {}

void Model::fileOpenRead(){
    myFile1.open(fileName, ios::in);
}

void Model::fileOpenWrite(){
    myFile1.open(fileName, ios::app);
}

void Model::fileClose(){
    myFile1.close();
}

void Model::fileWrite(string inFile){
    if(myFile1.is_open()){
        myFile1 << inFile << endl;
    }
}

string Model::fileRead(){
    string inString;
    QString instr;
    QStringList keyVal;

    while(!myFile1.eof()){
        getline (myFile1, inString);
        instr.fromStdString(inString);
        keyVal = instr.split(" = ");
        if(keyVal.size()>= 2){
            keyVal[0]; // Name
            keyVal[1]; // Inhalt
            inString = keyVal[1].toStdString();
        }
    }

    return inString;
}

string Model::getFileName()
{
    return fileName;
}

void Model::setFileName(string newFileName)
{
    fileName = newFileName;
}
