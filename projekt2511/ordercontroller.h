#pragma once
#include "OrderList.h"

class OrderController {
    OrderList model;

public:
    void createOrder(const std::string& text);
    bool cancelOrder(int number);
    void showAllOrders() const;
    const Order* findOrder(int number) const;
    bool hasOrders() const;
};
