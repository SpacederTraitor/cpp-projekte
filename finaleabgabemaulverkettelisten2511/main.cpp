#include <QApplication>
#include "mainwindow.h"
#include "ordermodel.h"
#include "kioskcontroller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    OrderListModel m;
    KioskController c(&w, &m);
    w.show();
    return a.exec();
}
