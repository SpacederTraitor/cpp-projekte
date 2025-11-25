#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QListView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QLineEdit* MainWindow::orderLineEdit() const
{
    return ui->lineEditOrder;
}

QPushButton* MainWindow::addButton() const
{
    return ui->pushButtonAdd;
}

QListView* MainWindow::orderListView() const
{
    return ui->listViewOrders;
}
