#pragma once
#include "OrderNode.h"

class OrderList {
    OrderNode* head;

public:
    OrderList();
    ~OrderList();

    void add(const Order& order);
    bool removeByNumber(int number);
    const Order* findByNumber(int number) const;
    bool isEmpty() const;
    void printAll() const;
};
