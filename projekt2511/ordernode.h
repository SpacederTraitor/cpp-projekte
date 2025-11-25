#pragma once
#include "Order.h"

class OrderNode {
public:
    Order data;
    OrderNode* next;

    OrderNode(const Order& o);
};
