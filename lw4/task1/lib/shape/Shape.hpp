#ifndef TASK1_SHAPE_HPP
#define TASK1_SHAPE_HPP

#include "lib/canvas/ICanvas.h"

class Shape
{
public:
    Shape(Color color)
            : m_color(color)
    {
    }

    Color GetColor() const
    {
        return m_color;
    }

    virtual void Draw(ICanvas& canvas) const = 0;

private:
    Color m_color;
};

#endif //TASK1_SHAPE_HPP
