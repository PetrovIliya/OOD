#ifndef TASK1_RECTANGLE_H
#define TASK1_RECTANGLE_H

#include "lib/canvas/Color.h"
#include "lib/canvas/ICanvas.h"
#include "lib/shape/Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(Color color, Point  leftTop, Point  rightBottom);
    virtual ~Rectangle() = default;

    void Draw(ICanvas& canvas) const override;
    Point GetLeftTop() const;
    Point GetRightBottom() const;

private:
    Point m_leftTop;
    Point m_rightBottom;
};


#endif //TASK1_RECTANGLE_H
