#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addieren_clicked()
{
    int zahl1;
    int zahl2;
    int summe;

    zahl1 = ui->eingabezahl1->value();
    zahl2 = ui->eingabezahl2->value();

    summe = zahl1 + zahl2;

    ui->ergebnisausgabe->setValue(summe);
}


void Widget::on_subtrahieren_clicked()
{
    int zahl1;
    int zahl2;
    int summe;

    zahl1 = ui->eingabezahl1->value();
    zahl2 = ui->eingabezahl2->value();

    summe = zahl1 - zahl2;

    ui->ergebnisausgabe->setValue(summe);
}


void Widget::on_multiplizieren_clicked()
{
    int zahl1;
    int zahl2;
    int summe;

    zahl1 = ui->eingabezahl1->value();
    zahl2 = ui->eingabezahl2->value();

    summe = zahl1 * zahl2;

    ui->ergebnisausgabe->setValue(summe);
}


void Widget::on_dividieren_clicked()
{
    int zahl1;
    int zahl2;
    int summe;

    zahl1 = ui->eingabezahl1->value();
    zahl2 = ui->eingabezahl2->value();

    summe = zahl1 / zahl2;

    ui->ergebnisausgabe->setValue(summe);
}

