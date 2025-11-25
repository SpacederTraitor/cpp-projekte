#ifndef KIOSKCONTROLLER_H
#define KIOSKCONTROLLER_H

#include <QObject>

class MainWindow;
class OrderListModel;

class KioskController : public QObject
{
    Q_OBJECT
public:
    explicit KioskController(MainWindow *view, OrderListModel *model, QObject *parent = nullptr);

private slots:
    void handleAddOrder();

private:
    MainWindow *m_view;
    OrderListModel *m_model;
    void connectSignals();
};

#endif
