#ifndef MARKET_SERVICE_HPP
#define MARKET_SERVICE_HPP

#include "../models/market.hpp"

class MarketService {
public:
    MarketService();

    Market getMarketBySymbol(const std::string& symbol);
    void updateMarketPrice(const std::string& symbol, double price);
    void updateMarketVolume(const std::string& symbol, double volume);
};

#endif  // MARKET_SERVICE_HPP
