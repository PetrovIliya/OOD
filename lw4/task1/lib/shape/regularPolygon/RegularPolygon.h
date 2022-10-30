#ifndef TASK1_REGULARPOLYGON_H
#define TASK1_REGULARPOLYGON_H

#include "lib/shape/Shape.hpp"

#define PI 3.14159265358979323846

class RegularPolygon : public Shape
{
public:
    RegularPolygon(Color color, size_t vertexCount, Point  center, double radius);
    virtual ~RegularPolygon() = default;

    void Draw(ICanvas& canvas) const override;

    size_t GetVertexCount() const;
    Point GetCenter() const;
    double GetRadius() const;

private:
    size_t m_vertexCount;
    Point m_center;
    double m_radius;

    Point GetVertexByIndex(size_t index) const;
};

#endif //TASK1_REGULARPOLYGON_H
