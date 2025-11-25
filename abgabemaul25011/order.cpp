#include "order.h"

Order::Order(int id, const std::string &text)
    : m_id(id), m_text(text)
{
}

int Order::id() const
{
    return m_id;
}

std::string Order::text() const
{
    return m_text;
}

void Order::setText(const std::string &text)
{
    m_text = text;
}
