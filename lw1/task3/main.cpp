#include "iostream"
#include "Duck.h"
#include "lib/Dance.cpp"
#include "lib/Fly.cpp"
#include "lib/Quack.cpp"
#include "lib/Display.cpp"

void DrawDuck(Duck &duck)
{
    duck.Display();
}

void PlayWithDuck(Duck& duck)
{
    DrawDuck(duck);
    duck.Quack();
    duck.Fly();
    duck.Dance();
    std::cout << std::endl;
}

int main()
{
    Duck mallardDuck(MallardDuckDisplay, FlyWithWings(), Quack, Waltz);
    PlayWithDuck(mallardDuck);

    Duck redheadDuck(RedheadDuckDisplay, FlyWithWings(), Quack, Minuet);
    PlayWithDuck(redheadDuck);

    Duck rubberDuck(RubberDuckDisplay, FlyWithWings(), Squeak, CantDance);
    PlayWithDuck(rubberDuck);

    Duck decoyDuck(DecoyDuckDisplay, FlyNoWay, Mute, CantDance);;
    PlayWithDuck(decoyDuck);

    Duck modelDuck(ModelDuckDisplay, FlyNoWay, Quack, CantDance);;
    PlayWithDuck(modelDuck);
}