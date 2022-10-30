cmake_minimum_required(VERSION 3.23)
project(task1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(task1
        main.cpp lib/shape/Shape.hpp
        lib/canvas/ICanvas.h
        lib/canvas/Color.h lib/shape/Rectangle/Rectangle.cpp
        lib/shape/Rectangle/Rectangle.h
        lib/shape/triangle/Triangle.cpp
        lib/shape/triangle/Triangle.h
        lib/shape/Ellipse/Ellipse.cpp
        lib/shape/Ellipse/Ellipse.h
        lib/shape/regularPolygon/RegularPolygon.cpp
        lib/shape/regularPolygon/RegularPolygon.h
        lib/canvas/Canvas.cpp lib/canvas/Canvas.h
        lib/pictureDraft/PictureDraft.cpp
        lib/pictureDraft/PictureDraft.h
        lib/designer/Designer.cpp lib/designer/Designer.h
        lib/designer/IDesigner.h lib/factory/shapeFactory/IShapeFactory.h
        lib/factory/shapeFactory/ShapeFactory.cpp
        lib/factory/shapeFactory/ShapeFactory.h
        lib/painter/Painter.cpp lib/painter/Painter.h
        lib/canvas/svgCanvas/SvgCanvas.hpp lib/canvas/svgCanvas/simple_svg_1.0.0.hpp)
