#include "Rectangle.h"

#include <utility>

Rectangle::Rectangle(Color color, Point leftTop, Point rightBottom)
        : Shape(color)
        , m_leftTop(std::move(leftTop))
        , m_rightBottom(std::move(rightBottom))
{
}

void Rectangle::Draw(ICanvas& canvas) const
{
    Point rightTop = { m_rightBottom.first, m_leftTop.second };
    Point leftBottom = { m_leftTop.first, m_rightBottom.second };

    canvas.SetColor(GetColor());
    canvas.DrawLine(m_leftTop, rightTop);
    canvas.DrawLine(m_leftTop, leftBottom);
    canvas.DrawLine(rightTop, m_rightBottom);
    canvas.DrawLine(leftBottom, m_rightBottom);
}

Point Rectangle::GetLeftTop() const
{
    return m_leftTop;
}

Point Rectangle::GetRightBottom() const
{
    return m_rightBottom;
}