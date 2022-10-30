#ifndef TASK1_CANVAS_H
#define TASK1_CANVAS_H

#include <ostream>
#include "ICanvas.h"

class Canvas : public ICanvas
{
public:
    Canvas(std::ostream& stream);
    ~Canvas() override = default;

    void SetColor(Color color) override;
    void DrawLine(const Point& from, const Point& to) override;
    void DrawEllipse(const Point& leftTop, double width, double height) override;

private:
    Color m_color;
    std::ostream& m_stream;
};

#endif //TASK1_CANVAS_H
