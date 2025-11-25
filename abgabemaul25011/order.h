#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order
{
public:
    Order(int id, const std::string &text);
    int id() const;
    std::string text() const;
    void setText(const std::string &text);

private:
    int m_id;
    std::string m_text;
};

#endif
