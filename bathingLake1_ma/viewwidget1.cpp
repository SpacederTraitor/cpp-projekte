#include "viewwidget1.h"
#include <QStringList>

ViewWidget1::ViewWidget1(QWidget *parent)
    : QWidget(parent), ui(new Ui::ViewWidget1)
{
    ui->setupUi(this);
}

ViewWidget1::~ViewWidget1()
{
    delete ui;
}

void ViewWidget1::on_btnCreateOneLouncherStandard_clicked()
{
    controller.createLauncherStandardType(3);
}

void ViewWidget1::on_btnCreateOneLouncherLuxurious_clicked()
{
    controller.createLauncherLuxuriousType(7, "hellgrau", "grau meliert", 3);
}

void ViewWidget1::on_btnShowListLaunchers_clicked()
{
    const QStringList lines = controller.serializeAll();
    ui->edtListLaunchers->setPlainText(lines.join("\n"));
}

void ViewWidget1::on_btnClearLog_clicked()
{
    ui->edtListLaunchers->clear();
}
