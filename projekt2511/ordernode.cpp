#include "OrderNode.h"

OrderNode::OrderNode(const Order& o)
    : data(o), next(nullptr) {}
