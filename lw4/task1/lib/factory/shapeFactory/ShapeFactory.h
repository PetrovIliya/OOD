#ifndef TASK1_SHAPEFACTORY_H
#define TASK1_SHAPEFACTORY_H

#include <memory>
#include <map>
#include <functional>
#include "lib/shape/Shape.hpp"
#include "IShapeFactory.h"

class ShapeFactory : public IShapeFactory
{
public:
    ShapeFactory();
    ~ShapeFactory() override = default;

    std::shared_ptr<Shape> CreateShape(const std::string& description) override;

private:
    std::map<std::string, std::function<std::shared_ptr<Shape>(std::istream&)>> m_shapeGeneratorsMap;
};

#endif //TASK1_SHAPEFACTORY_H
