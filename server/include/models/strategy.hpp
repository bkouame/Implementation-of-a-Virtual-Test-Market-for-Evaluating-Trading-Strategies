#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include <string>

class Strategy {
public:
    Strategy(const std::string& name, const std::string& description);

    std::string getName() const;
    std::string getDescription() const;

private:
    std::string name;
    std::string description;
};

#endif  // STRATEGY_HPP
