#ifndef MARKET_CONTROLLER_HPP
#define MARKET_CONTROLLER_HPP

#include "../services/marketService.hpp"

class MarketController {
private:
    MarketService marketService;

public:
    MarketController();

    void getMarketBySymbol(const std::string& symbol);
    void updateMarketPrice(const std::string& symbol, double price);
    void updateMarketVolume(const std::string& symbol, double volume);
};

#endif  // MARKET_CONTROLLER_HPP
