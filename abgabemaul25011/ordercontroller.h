#ifndef ORDERCONTROLLER_H
#define ORDERCONTROLLER_H

#include <vector>
#include <string>
#include "orderlist.h"

class OrderController
{
public:
    OrderController();
    bool addOrder(const std::string &text);
    bool removeOrder(int id);
    std::vector<Order> getOrders() const;
    bool isFull() const;

private:
    OrderList m_list;
};

#endif
