#ifndef OOD_MODELDUCK_H
#define OOD_MODELDUCK_H

#include "../Duck.h"

class ModelDuck : public Duck
{
public:
    ModelDuck();

    void Display() const override;

    void Dance() override;
};


#endif //OOD_MODELDUCK_H
