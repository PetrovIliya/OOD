#ifndef TASK1_ELLIPSE_H
#define TASK1_ELLIPSE_H

#include "lib/shape/Shape.hpp"

class Ellipse : public Shape
{
public:
    Ellipse(Color color, const Point& leftTop, double width, double height);
    virtual ~Ellipse() = default;

    void Draw(ICanvas& canvas) const override;
    Point GetLeftTop() const;
    double GetWidth() const;
    double GetHeight() const;

private:
    Point m_leftTop;
    double m_width;
    double m_height;
};

#endif //TASK1_ELLIPSE_H
