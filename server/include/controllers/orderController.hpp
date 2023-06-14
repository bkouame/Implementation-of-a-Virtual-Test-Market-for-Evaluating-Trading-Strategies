#ifndef ORDER_CONTROLLER_HPP
#define ORDER_CONTROLLER_HPP

#include "../services/orderService.hpp"

class OrderController {
private:
    OrderService orderService;

public:
    OrderController();

    void createOrder(const std::string& symbol, OrderType type, double price, double volume);
    void executeOrder(int orderId);
    void cancelOrder(int orderId);
    void getAllOrders();
    void getOrdersBySymbol(const std::string& symbol);
};

#endif  // ORDER_CONTROLLER_HPP
