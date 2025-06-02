#include "dialog1init.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog1Init d1;
    d1.show();
    return a.exec();
}
