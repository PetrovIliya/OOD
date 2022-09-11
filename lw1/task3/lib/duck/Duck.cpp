#include "Duck.h"

#include <iostream>

Duck::Duck(std::function<void()> displayStrategy, std::function<void()> quackStrategy, std::function<void()> flyStrategy, std::function<void()> danceStrategy)
        : m_displayStrategy(std::move(displayStrategy))
        , m_flyStrategy(std::move(flyStrategy))
        , m_quackStrategy(std::move(quackStrategy))
        , m_danceStrategy(std::move(danceStrategy))
{}

void Duck::Quack() const
{
    m_flyStrategy();
}

void Duck::Fly()
{
    m_flyStrategy();
}

void Duck::Dance()
{
    m_danceStrategy();
}

void Duck::Display()
{
    m_displayStrategy();
}