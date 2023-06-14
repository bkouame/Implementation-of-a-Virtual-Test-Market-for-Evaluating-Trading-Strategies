#ifndef STRATEGY_SERVICE_HPP
#define STRATEGY_SERVICE_HPP

#include "../models/strategy.hpp"
#include <vector>

class StrategyService {
public:
    StrategyService();

    Strategy createStrategy(const std::string& name, const std::string& description);
    void updateStrategy(Strategy& strategy);
    void deleteStrategy(Strategy& strategy);
    Strategy getStrategyById(int strategyId);
    std::vector<Strategy> getAllStrategies();
};

#endif  // STRATEGY_SERVICE_HPP
