#include "kioskcontroller.h"
#include "mainwindow.h"
#include "ordermodel.h"
#include <QLineEdit>
#include <QPushButton>
#include <QListView>
#include <QMessageBox>

KioskController::KioskController(MainWindow *view, OrderListModel *model, QObject *parent)
    : QObject(parent), m_view(view), m_model(model)
{
    m_view->orderListView()->setModel(m_model);
    connectSignals();
}

void KioskController::connectSignals()
{
    connect(m_view->addButton(), &QPushButton::clicked, this, &KioskController::handleAddOrder);
    connect(m_view->orderLineEdit(), &QLineEdit::returnPressed, this, &KioskController::handleAddOrder);
}

void KioskController::handleAddOrder()
{
    QString t = m_view->orderLineEdit()->text().trimmed();
    if (t.isEmpty()) { QMessageBox::warning(m_view, "Fehler", "Bitte eine Zahl eingeben."); return; }
    bool ok = false;
    int v = t.toInt(&ok);
    if (!ok) { QMessageBox::warning(m_view, "Fehler", "Ungültige Zahl."); return; }
    m_model->addOrder(v);
    m_view->orderLineEdit()->clear();
    m_view->orderLineEdit()->setFocus();
}
