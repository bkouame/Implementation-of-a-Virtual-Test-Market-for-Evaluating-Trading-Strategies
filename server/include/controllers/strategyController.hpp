#ifndef STRATEGY_CONTROLLER_HPP
#define STRATEGY_CONTROLLER_HPP

#include "../services/strategyService.hpp"

class StrategyController {
private:
    StrategyService strategyService;

public:
    StrategyController();

    void createStrategy(const std::string& name, const std::string& description);
    void updateStrategy(int strategyId, const std::string& newName, const std::string& newDescription);
    void deleteStrategy(int strategyId);
    void getStrategyById(int strategyId);
    void getAllStrategies();
};

#endif  // STRATEGY_CONTROLLER_HPP
