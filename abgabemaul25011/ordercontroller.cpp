#include "ordercontroller.h"

OrderController::OrderController()
    : m_list()
{
}

bool OrderController::addOrder(const std::string &text)
{
    return m_list.addOrder(text);
}

bool OrderController::removeOrder(int id)
{
    return m_list.removeOrder(id);
}

std::vector<Order> OrderController::getOrders() const
{
    return m_list.toVector();
}

bool OrderController::isFull() const
{
    return m_list.isFull();
}
