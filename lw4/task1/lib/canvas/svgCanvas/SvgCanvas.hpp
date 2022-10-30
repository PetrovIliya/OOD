#ifndef TASK1_SVGCANVAS_HPP
#define TASK1_SVGCANVAS_HPP

#include <string>
#include "lib/canvas/ICanvas.h"
#include "simple_svg_1.0.0.hpp"

class SvgCanvas : public ICanvas
{
public:
    SvgCanvas(const std::string& fileName, double width, double height, double lineWidth)
            : m_doc(fileName, svg::Layout(svg::Dimensions(width, height), svg::Layout::TopLeft))
            , m_lineWidth(lineWidth)
    {

    }

    ~SvgCanvas() override
    {
        m_doc.save();
    }

    void SetColor(Color color) override
    {
        m_color = color;
    }

    static svg::Color CanvasColorToSvgColor(Color color)
    {
        switch (color)
        {
            case Green:
                return svg::Color::Green;
            case Red:
                return svg::Color::Red;
            case Blue:
                return svg::Color::Blue;
            case Yellow:
                return svg::Color::Yellow;
            case Pink:
                return {255, 105, 180};
            case Black:
                return svg::Color::Black;
            default:
                return svg::Color::Transparent;
        }
    }

    void DrawLine(const Point& from, const Point& to) override
    {
        svg::Polyline line(svg::Stroke(m_lineWidth, CanvasColorToSvgColor(m_color)));
        line << svg::Point(from.first, from.second) << svg::Point(to.first, to.second);

        m_doc << line;
    }

    void DrawEllipse(const Point& leftTop, double width, double height) override
    {
        double centerX = leftTop.first + width / 2;
        double centerY = leftTop.second + height / 2;
        svg::Elipse elipse(svg::Point(centerX, centerY), width, height, svg::Fill(), svg::Stroke(m_lineWidth, CanvasColorToSvgColor(m_color)));

        m_doc << elipse;
    }

private:
    Color m_color;
    double m_lineWidth;
    svg::Document m_doc;
};

#endif //TASK1_SVGCANVAS_HPP
