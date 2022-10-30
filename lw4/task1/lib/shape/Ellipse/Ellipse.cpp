#include "Ellipse.h"

Ellipse::Ellipse(Color color, const Point& leftTop, double width, double height)
        : Shape(color)
        , m_leftTop(leftTop)
        , m_width(width)
        , m_height(height)
{
}
void Ellipse::Draw(ICanvas& canvas) const
{
    canvas.SetColor(GetColor());
    canvas.DrawEllipse(m_leftTop, m_width, m_height);
}

Point Ellipse::GetLeftTop() const
{
    return m_leftTop;
}

double Ellipse::GetWidth() const
{
    return m_width;
}

double Ellipse::GetHeight() const
{
    return m_height;
}