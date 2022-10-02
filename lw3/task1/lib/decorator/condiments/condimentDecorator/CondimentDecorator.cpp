#include "CondimentDecorator.h"

std::string CondimentDecorator::GetDescription() const
{
    // Описание декорированного напитка добавляется к описанию оборачиваемого напитка
    return m_beverage->GetDescription() + ", " + GetCondimentDescription();
}

double CondimentDecorator::GetCost() const
{
    // Стоимость складывается из стоимости добавки и стоимости декорируемого напитка
    return m_beverage->GetCost() + GetCondimentCost();
}

CondimentDecorator::CondimentDecorator(IBeveragePtr &&beverage)
        : m_beverage(std::move(beverage))
{
}
