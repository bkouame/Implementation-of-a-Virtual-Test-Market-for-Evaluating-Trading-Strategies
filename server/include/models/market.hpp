#ifndef MARKET_HPP
#define MARKET_HPP

#include <string>
#include <vector>

class Market {
public:
    Market(const std::string& symbol, double price, double volume);

    std::string getSymbol() const;
    double getPrice() const;
    double getVolume() const;

private:
    std::string symbol;
    double price;
    double volume;
};

#endif  // MARKET_HPP
