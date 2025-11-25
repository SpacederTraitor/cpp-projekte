#ifndef ORDERLIST_H
#define ORDERLIST_H

#include <vector>
#include <string>
#include "order.h"

class OrderList
{
public:
    OrderList();
    ~OrderList();
    bool addOrder(const std::string &text);
    bool removeOrder(int id);
    void clear();
    bool isFull() const;
    int size() const;
    std::vector<Order> toVector() const;

private:
    struct Node {
        Order data;
        Node *next;
        Node(const Order &order) : data(order), next(nullptr) {}
    };

    Node *m_head;
    int m_size;
    int m_nextId;
    static const int MAX_ORDERS = 12;

    void deleteAllNodes();
};

#endif
