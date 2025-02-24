#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_berechnen_clicked()
{
    int zahl1;
    int zahl2;
    int ausgabe;
    QString rechenzeichen;

    zahl1 = ui->eingabe1->setValue();
    zahl2 = ui->eingabe2->setValue();
    rechenzeichen = ui->auswaehlen->currentText();

    ausgabe = zahl1 rechenzeichen zahl2;
}

