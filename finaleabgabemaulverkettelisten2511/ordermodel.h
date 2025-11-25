#ifndef ORDERMODEL_H
#define ORDERMODEL_H

#include <QAbstractListModel>

struct Node {
    int value;
    Node* next;
    Node(int v) : value(v), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() { clear(); }
    void insertSorted(int v) {
        Node* n = new Node(v);
        if (!head || v < head->value) { n->next = head; head = n; return; }
        Node* c = head;
        while (c->next && c->next->value <= v) c = c->next;
        n->next = c->next;
        c->next = n;
    }
    int size() const {
        int c = 0; Node* n = head; while (n) { c++; n = n->next; }
        return c;
    }
    int at(int idx) const {
        int i = 0; Node* n = head;
        while (n) { if (i == idx) return n->value; n = n->next; i++; }
        return 0;
    }
    void clear() {
        Node* n = head;
        while (n) { Node* t = n; n = n->next; delete t; }
        head = nullptr;
    }
private:
    Node* head;
};

class OrderListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit OrderListModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    void addOrder(int value);
    void clearOrders();
private:
    LinkedList m_list;
};

#endif
