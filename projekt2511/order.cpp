#include "Order.h"
#include <iostream>

int Order::nextNumber = 1;

Order::Order(const std::string& text)
    : number(nextNumber++), text(text) {}

Order::Order(int number, const std::string& text)
    : number(number), text(text) {
    if (number >= nextNumber) {
        nextNumber = number + 1;
    }
}

int Order::getNumber() const {
    return number;
}

const std::string& Order::getText() const {
    return text;
}

void Order::setText(const std::string& t) {
    text = t;
}

void Order::print() const {
    std::cout << "Bestellung #" << number << ": " << text << '\n';
}
