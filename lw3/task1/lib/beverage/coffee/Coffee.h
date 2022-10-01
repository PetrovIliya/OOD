#ifndef TASK1_COFFEE_H
#define TASK1_COFFEE_H

#include <string>
#include "../BaseBeverage.hpp"

class Coffee  : public BaseBeverage
{
public:
    explicit Coffee(const std::string& description = "Coffee");

    double GetCost() const override;
};

#endif //TASK1_COFFEE_H
