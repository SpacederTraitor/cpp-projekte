#include "OrderController.h"

void OrderController::createOrder(const std::string& text) {
    Order o(text);
    model.add(o);
}

bool OrderController::cancelOrder(int number) {
    return model.removeByNumber(number);
}

void OrderController::showAllOrders() const {
    model.printAll();
}

const Order* OrderController::findOrder(int number) const {
    return model.findByNumber(number);
}

bool OrderController::hasOrders() const {
    return !model.isEmpty();
}
