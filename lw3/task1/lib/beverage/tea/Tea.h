#ifndef TASK1_TEA_H
#define TASK1_TEA_H

#include "../BaseBeverage.hpp"
#include "iostream"

class Tea : public BaseBeverage
{
public:
    explicit Tea(const std::string& description = "Tea");

    double GetCost() const override;
};


#endif //TASK1_TEA_H
