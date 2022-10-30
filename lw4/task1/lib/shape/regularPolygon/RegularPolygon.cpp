#include <stdexcept>
#include <complex>
#include <utility>
#include "RegularPolygon.h"

RegularPolygon::RegularPolygon(Color color, std::size_t vertexCount, Point  center, double radius)
        : Shape(color)
        , m_vertexCount(vertexCount)
        , m_center(std::move(center))
        , m_radius(radius)
{
    if (m_vertexCount < 3)
    {
        throw std::invalid_argument("vertex count too smol");
    }
}

void RegularPolygon::Draw(ICanvas& canvas) const
{
    canvas.SetColor(GetColor());
    Point firstVertex = GetVertexByIndex(0);
    Point lastVertex = firstVertex;

    for (size_t i = 0; i < m_vertexCount; ++i)
    {
        Point from = GetVertexByIndex(i);
        Point to = GetVertexByIndex(i + 1);
        canvas.DrawLine(from, to);
        lastVertex = to;
    }
}

size_t RegularPolygon::GetVertexCount() const
{
    return m_vertexCount;
}

Point RegularPolygon::GetCenter() const
{
    return m_center;
}

double RegularPolygon::GetRadius() const
{
    return m_radius;
}

Point RegularPolygon::GetVertexByIndex(size_t index) const
{
    double x = m_center.first + m_radius * std::cos(PI / 2 + (2 * PI * index) / m_vertexCount);
    double y = m_center.second + m_radius * std::sin(PI / 2 + (2 * PI * index) / m_vertexCount);
    return { x, y };
}