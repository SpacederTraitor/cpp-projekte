#include "dialog1init.h"
#include "ui_dialog1init.h"

Dialog1Init::Dialog1Init(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog1Init)
{
    ui->setupUi(this);
    uiMain = new UiMain(this);
}

Dialog1Init::~Dialog1Init()
{
    delete ui;
}
