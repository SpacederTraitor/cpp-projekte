#include "orderlist.h"

OrderList::OrderList()
    : m_head(nullptr), m_size(0), m_nextId(1)
{
}

OrderList::~OrderList()
{
    deleteAllNodes();
}

void OrderList::deleteAllNodes()
{
    Node *current = m_head;
    while (current != nullptr) {
        Node *next = current->next;
        delete current;
        current = next;
    }
    m_head = nullptr;
    m_size = 0;
}

bool OrderList::isFull() const
{
    return m_size >= MAX_ORDERS;
}

int OrderList::size() const
{
    return m_size;
}

bool OrderList::addOrder(const std::string &text)
{
    if (isFull())
        return false;

    Order newOrder(m_nextId++, text);
    Node *node = new Node(newOrder);

    if (!m_head) {
        m_head = node;
    } else {
        Node *current = m_head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = node;
    }

    ++m_size;
    return true;
}

bool OrderList::removeOrder(int id)
{
    if (!m_head)
        return false;

    Node *current = m_head;
    Node *prev = nullptr;

    while (current != nullptr) {
        if (current->data.id() == id) {
            if (prev == nullptr)
                m_head = current->next;
            else
                prev->next = current->next;

            delete current;
            --m_size;
            return true;
        }
        prev = current;
        current = current->next;
    }
    return false;
}

void OrderList::clear()
{
    deleteAllNodes();
}

std::vector<Order> OrderList::toVector() const
{
    std::vector<Order> result;
    result.reserve(m_size);

    Node *current = m_head;
    while (current != nullptr) {
        result.push_back(current->data);
        current = current->next;
    }
    return result;
}
