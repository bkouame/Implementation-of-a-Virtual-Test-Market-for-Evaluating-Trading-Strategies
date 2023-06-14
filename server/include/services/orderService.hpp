#ifndef ORDER_SERVICE_HPP
#define ORDER_SERVICE_HPP

#include "../models/order.hpp"
#include <vector>
class OrderService {
public:
    OrderService();

    Order createOrder(const std::string& symbol, OrderType type, double price, double volume);
    void executeOrder(Order& order);
    void cancelOrder(Order& order);
    std::vector<Order> getAllOrders();
    std::vector<Order> getOrdersBySymbol(const std::string& symbol);
};

#endif  // ORDER_SERVICE_HPP
