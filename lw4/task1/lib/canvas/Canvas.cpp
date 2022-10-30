#include "Canvas.h"

Canvas::Canvas(std::ostream& stream)
        : m_stream(stream)
{
}

void Canvas::SetColor(Color color)
{
    m_color = color;
}

void Canvas::DrawLine(const Point& from, const Point& to)
{
    m_stream << "line; color: " << m_color
             << "; from: {" << from.first << "," << from.second
             << "}; to: {" << to.first << "," << to.second << "};" << std::endl;
}

void Canvas::DrawEllipse(const Point& leftTop, double width, double height)
{
    m_stream << "ellipse; color: " << m_color
             << "; leftTop: {" << leftTop.first << "," << leftTop.second
             << "}; width: " << width << "; height: " << height << ";" << std::endl;
}