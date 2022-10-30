#ifndef TASK1_TRIANGLE_H
#define TASK1_TRIANGLE_H

#include "lib/canvas/Color.h"
#include "lib/canvas/ICanvas.h"
#include "lib/shape/Shape.hpp"

class Triangle: public Shape
{
public:
    Triangle(Color color, Point  vertex1, Point  vertex2, Point  vertex3);
    virtual ~Triangle() = default;

    void Draw(ICanvas& canvas) const override;

    Point GetVertex1() const;
    Point GetVertex2() const;
    Point GetVertex3() const;

private:
    Point m_vertex1;
    Point m_vertex2;
    Point m_vertex3;
};


#endif //TASK1_TRIANGLE_H
