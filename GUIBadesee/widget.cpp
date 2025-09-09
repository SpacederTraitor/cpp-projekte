#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    see=new See;
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

    temptext = QString::number(wassertemperaturaktuell);

    ui->plainTextEdit->appendPlainText(temptext);
}


void Widget::on_wasserqualitaetbutton_clicked()
{
    QString temptext;

    int wasserqualitaet;

    wasserqualitaet = see->getWasserqualitaet();

    temptext = QString::number(wasserqualitaet);

    ui->plainTextEdit->appendPlainText(temptext);
}


void Widget::on_personenanzahlbutton_clicked()
{

}

