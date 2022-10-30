#include "Designer.h"
#include <iostream>
#include <utility>

Designer::Designer(std::shared_ptr<IShapeFactory> factory)
        : m_factory(std::move(factory))
{
}

PictureDraft Designer::CreateDraft(std::istream& stream)
{
    std::vector<std::shared_ptr<Shape>> shapeArr;
    std::string line;

    while (getline(stream, line))
    {
        shapeArr.push_back(m_factory->CreateShape(line));
    }

    return PictureDraft(shapeArr);
}