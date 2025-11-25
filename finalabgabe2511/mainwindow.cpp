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

void MainWindow::on_btnAdd_clicked()
{
    LakeEntry entry(
        ui->txtName->text(),
        ui->spinTemp->value(),
        ui->spinVisitors->value()
        );

    m_manager.addEntry(entry);
    updateList();
}

void MainWindow::on_btnNext_clicked()
{
    m_manager.next();
    updateCurrentEntry();
}

void MainWindow::on_btnPrevious_clicked()
{
    m_manager.previous();
    updateCurrentEntry();
}

void MainWindow::on_listWidgetEntries_currentRowChanged(int row)
{
    m_manager.selectIndex(row);
    updateCurrentEntry();
}

void MainWindow::updateList()
{
    ui->listWidgetEntries->clear();

    for (int i = 0; i < m_manager.size(); ++i) {
        LakeEntry e = m_manager.currentEntry();
        ui->listWidgetEntries->addItem(e.name());
    }
}

void MainWindow::updateCurrentEntry()
{
    LakeEntry e = m_manager.currentEntry();

    ui->txtName->setText(e.name());
    ui->spinTemp->setValue(e.temperature());
    ui->spinVisitors->setValue(e.visitorCount());
}
