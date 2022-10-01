#include "IceCubes.h"

IceCubes::IceCubes(IBeveragePtr &&beverage, unsigned int quantity, IceCubeType type)
        : CondimentDecorator(std::move(beverage))
        , m_quantity(quantity)
        , m_type(type)
{}

double IceCubes::GetCondimentCost() const
{
    // Чем больше кубиков, тем больше стоимость.
    // Сухой лед стоит дороже
    return (m_type == IceCubeType::Dry ? 10 : 5) * m_quantity;
}

std::string IceCubes::GetCondimentDescription() const
{
    return std::string(m_type == IceCubeType::Dry ? "Dry" : "Water")
           + " ice cubes x " + std::to_string(m_quantity);
}
