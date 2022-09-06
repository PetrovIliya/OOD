#include "iostream"
#include "lib/duck/mallardDuck/MallardDuck.h"
#include "lib/duck/rubberDuck/RubberDuck.h"
#include "lib/duck/decoyDuck/DecoyDuck.h"
#include "lib/duck/modelDuck/ModelDuck.h"
#include "lib/duck/redheadDuck/RedheadDuck.h"
#include "lib/fly/flyWithWings/FlyWithWings.h"

void DrawDuck(Duck const& duck)
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
    MallardDuck mallardDuck;
    PlayWithDuck(mallardDuck);

    RedheadDuck redheadDuck;
    PlayWithDuck(redheadDuck);

    RubberDuck rubberDuck;
    PlayWithDuck(rubberDuck);

    DecoyDuck decoyDuck;
    PlayWithDuck(decoyDuck);

    ModelDuck modelDuck;
    PlayWithDuck(modelDuck);
    modelDuck.SetFlyBehavior(std::make_unique<FlyWithWings>());
    PlayWithDuck(modelDuck);
}