#include "Triangle.h"

#include <utility>

Triangle::Triangle(Color color, Point  vertex1, Point  vertex2, Point  vertex3)
        : Shape(color)
        , m_vertex1(std::move(vertex1))
        , m_vertex2(std::move(vertex2))
        , m_vertex3(std::move(vertex3))
{
}

void Triangle::Draw(ICanvas& canvas) const
{
    canvas.SetColor(GetColor());
    canvas.DrawLine(m_vertex1, m_vertex2);
    canvas.DrawLine(m_vertex2, m_vertex3);
    canvas.DrawLine(m_vertex3, m_vertex1);
}

Point Triangle::GetVertex1() const
{
    return m_vertex1;
}

Point Triangle::GetVertex2() const
{
    return m_vertex2;
}

Point Triangle::GetVertex3() const
{
    return m_vertex3;
}