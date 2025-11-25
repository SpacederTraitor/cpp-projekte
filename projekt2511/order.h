#pragma once
#include <string>

class Order {
    static int nextNumber;
    int number;
    std::string text;

public:
    Order(const std::string& text);
    Order(int number, const std::string& text);

    int getNumber() const;
    const std::string& getText() const;
    void setText(const std::string& t);
    void print() const;
};
