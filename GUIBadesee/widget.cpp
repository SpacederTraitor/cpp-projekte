#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    see=new See;
    person=new Person;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_wassertemperaturaktuellbutton_clicked()
{
    QString temptext;

    int wassertemperaturaktuell;

    wassertemperaturaktuell = see->getWassertemperaturaktuell();

    temptext = QString::number(wassertemperaturaktuell) + " C° ist die aktuelle Wassertemperatur.";

    ui->plainTextEdit->appendPlainText(temptext);
}


void Widget::on_wasserqualitaetbutton_clicked()
{
    QString temptext;

    int wasserqualitaet;

    wasserqualitaet = see->getWasserqualitaet();

    temptext = QString::number(wasserqualitaet) + " ist die aktuelle Wasserqualität.";

    ui->plainTextEdit->appendPlainText(temptext);
}


void Widget::on_personenanzahlbutton_clicked()
{
    QString temptext;

    int personenanzahl;

    personenanzahl = person->getPersonenanzahl();

    temptext = QString::number(personenanzahl) + " Personen sind gerade im See.";

    ui->plainTextEdit->appendPlainText(temptext);
}

