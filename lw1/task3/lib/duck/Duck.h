#ifndef OOD_DUCK_H
#define OOD_DUCK_H

#include <memory>
#include <functional>

struct Duck
{
public:

    Duck(std::function<void()> displayStrategy, std::function<void()> quackStrategy, std::function<void()> flyStrategy, std::function<void()> danceStrategy);

    void Quack() const;

    void Fly();

    void Dance();

    void Display();

private:
    std::function<void()> m_displayStrategy;
    std::function<void()> m_quackStrategy;
    std::function<void()> m_flyStrategy;
    std::function<void()> m_danceStrategy;
};

#endif //OOD_DUCK_H
