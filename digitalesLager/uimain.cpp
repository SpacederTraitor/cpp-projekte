#include "uimain.h"
#include "ui_uimain.h"

UiMain::UiMain(QWidget *parent, Dialog1Init *d1)
    : QWidget(parent)
    , ui(new Ui::UiMain)
{
    ui->setupUi(this);
    dialog1Init = d1;
}

UiMain::~UiMain()
{
    delete ui;
    this->deleteLater();
}
