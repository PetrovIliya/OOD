#include "ShapeFactory.h"
#include "lib/shape/triangle/Triangle.h"
#include "lib/shape/Rectangle/Rectangle.h"
#include "lib/shape/regularPolygon/RegularPolygon.h"
#include "lib/shape/Ellipse/Ellipse.h"
#include <sstream>

const std::string TRIANGLE_NAME = "triangle";
const std::string RECTANGLE_NAME = "rectangle";
const std::string ELLIPSE_NAME = "ellipse";
const std::string POLYGON_NAME = "polygon";

template <typename T>
T GetArg(std::istream& argsStream)
{
    T arg;
    if (!(argsStream >> arg))
    {
        throw std::logic_error("Not enough arguments");
    }
    return arg;
}

template <>
Color GetArg(std::istream& argsStream)
{
    int arg = GetArg<int>(argsStream);
    return static_cast<Color>(arg);
}

std::shared_ptr<Triangle> MakeTriangle(std::istream& argsStream)
{
    Point vertex1 = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    Point vertex2 = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    Point vertex3 = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    Color color = GetArg<Color>(argsStream);

    return std::make_shared<Triangle>(color, vertex1, vertex2, vertex3);
}

std::shared_ptr<Rectangle> MakeRectangle(std::istream& argsStream)
{
    Point leftTop = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    Point rightBottom = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    Color color = GetArg<Color>(argsStream);

    return std::make_shared<Rectangle>(color, leftTop, rightBottom);
}

std::shared_ptr<RegularPolygon> MakePolygon(std::istream& argsStream)
{
    auto vertexCount = GetArg<size_t>(argsStream);
    Point center = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    auto radius = GetArg<double>(argsStream);
    Color color = GetArg<Color>(argsStream);

    return std::make_shared<RegularPolygon>(color, vertexCount, center, radius);
}

std::shared_ptr<Ellipse> MakeEllipse(std::istream& argsStream)
{
    Point leftTop = { GetArg<double>(argsStream), GetArg<double>(argsStream) };
    auto width = GetArg<double>(argsStream);
    auto height = GetArg<double>(argsStream);
    Color color = GetArg<Color>(argsStream);

    return std::make_shared<Ellipse>(color, leftTop, width, height);
}

ShapeFactory::ShapeFactory()
{
    m_shapeGeneratorsMap[TRIANGLE_NAME] = MakeTriangle;
    m_shapeGeneratorsMap[RECTANGLE_NAME] = MakeRectangle;
    m_shapeGeneratorsMap[ELLIPSE_NAME] = MakeEllipse;
    m_shapeGeneratorsMap[POLYGON_NAME] = MakePolygon;
}

std::shared_ptr<Shape> ShapeFactory::CreateShape(const std::string& description)
{
    std::istringstream args(description);
    std::string shapeName;

    try
    {
        args >> shapeName;
        auto shapeIt = m_shapeGeneratorsMap.find(shapeName);
        if (shapeIt == m_shapeGeneratorsMap.end())
        {
            throw std::invalid_argument("Unhandled shape: " + shapeName + " given");
        }

        return shapeIt->second(args);
    }
    catch (const std::exception& ex)
    {
        throw std::invalid_argument("Error while parsing " + shapeName + " arguments: " + ex.what());
    }
}