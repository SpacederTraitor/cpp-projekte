#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Optional: Fenster-Titel
    setWindowTitle("Kiosk – Bestellnummern");

    // Optional: Enter-Taste im LineEdit löst Klick auf Button aus
    connect(ui->lineEditOrder, &QLineEdit::returnPressed,
            ui->pushButtonAdd, &QPushButton::click);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdd_clicked()
{
    QString text = ui->lineEditOrder->text().trimmed();
    if (text.isEmpty()) {
        QMessageBox::warning(this, "Fehler", "Bitte eine Bestellnummer eingeben.");
        return;
    }

    bool ok = false;
    int value = text.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Fehler", "Die Bestellnummer muss eine Zahl sein.");
        return;
    }

    // In verkettete Liste sortiert einfügen
    orders.insertSorted(value);

    // Anzeige aktualisieren
    updateListWidget();

    // Eingabefeld leeren
    ui->lineEditOrder->clear();
    ui->lineEditOrder->setFocus();
}

void MainWindow::updateListWidget()
{
    ui->listWidgetOrders->clear();
    QStringList list = orders.toQStringList();
    ui->listWidgetOrders->addItems(list);
}
