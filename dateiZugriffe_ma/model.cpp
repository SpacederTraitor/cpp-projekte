#include "model.h"

Model::Model() {}

void Model::fileOpen(){
    myFile1.open(fileName, ios::in);
}

void Model::fileClose(){
    myFile1.close();
}

void Model::fileWrite(string inFile){

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
