#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>

enum class OrderType {
    BUY,
    SELL
};

class Order {
public:
    Order(const std::string& symbol, OrderType type, double price, double volume);

    std::string getSymbol() const;
    OrderType getType() const;
    double getPrice() const;
    double getVolume() const;

private:
    std::string symbol;
    OrderType type;
    double price;
    double volume;
};

#endif  // ORDER_HPP
