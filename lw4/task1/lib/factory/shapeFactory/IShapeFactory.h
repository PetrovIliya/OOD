#ifndef TASK1_ISHAPEFACTORY_H
#define TASK1_ISHAPEFACTORY_H

#include <memory>
#include "lib/shape/Shape.hpp"

class IShapeFactory
{
public:
    virtual ~IShapeFactory() = default;

    virtual std::shared_ptr<Shape> CreateShape(const std::string& description) = 0;
};

#endif //TASK1_ISHAPEFACTORY_H
