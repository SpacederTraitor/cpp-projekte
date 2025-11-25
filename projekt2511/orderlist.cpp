#include "OrderList.h"
#include <iostream>

OrderList::OrderList()
    : head(nullptr) {}

OrderList::~OrderList() {
    OrderNode* current = head;
    while (current) {
        OrderNode* tmp = current;
        current = current->next;
        delete tmp;
    }
}

void OrderList::add(const Order& order) {
    OrderNode* newNode = new OrderNode(order);
    if (!head) {
        head = newNode;
    } else {
        OrderNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

bool OrderList::removeByNumber(int number) {
    if (!head) return false;

    if (head->data.getNumber() == number) {
        OrderNode* tmp = head;
        head = head->next;
        delete tmp;
        return true;
    }

    OrderNode* current = head;
    while (current->next && current->next->data.getNumber() != number) {
        current = current->next;
    }

    if (!current->next) return false;

    OrderNode* tmp = current->next;
    current->next = current->next->next;
    delete tmp;
    return true;
}

const Order* OrderList::findByNumber(int number) const {
    OrderNode* current = head;
    while (current) {
        if (current->data.getNumber() == number) {
            return &current->data;
        }
        current = current->next;
    }
    return nullptr;
}

bool OrderList::isEmpty() const {
    return head == nullptr;
}

void OrderList::printAll() const {
    if (!head) {
        std::cout << "Keine Bestellungen vorhanden.\n";
        return;
    }
    OrderNode* current = head;
    while (current) {
        current->data.print();
        current = current->next;
    }
}
