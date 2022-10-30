#include <iostream>
#include "lib/factory/shapeFactory/IShapeFactory.h"
#include "lib/factory/shapeFactory/ShapeFactory.h"
#include "lib/designer/Designer.h"
#include "lib/painter/Painter.h"
#include "lib/canvas/svgCanvas/SvgCanvas.hpp"

int main()
{
    try
    {
        std::shared_ptr<IShapeFactory> factory = std::make_shared<ShapeFactory>();
        Designer designer(factory);

        PictureDraft draft = designer.CreateDraft(std::cin);
        SvgCanvas canvas("test.svg", 100, 100, 2);
        Painter::DrawPicture(draft, canvas);
    }
    catch (const std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
    }
}