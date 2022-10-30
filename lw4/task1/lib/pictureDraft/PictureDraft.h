#ifndef TASK1_PICTUREDRAFT_H
#define TASK1_PICTUREDRAFT_H

#include <vector>
#include <memory>
#include "lib/shape/Shape.hpp"

class PictureDraft
{
public:
    explicit PictureDraft(std::vector<std::shared_ptr<Shape>> shapeArr);

    std::size_t GetShapeCount() const;
    std::shared_ptr<Shape> GetShape(size_t index) const;

private:
    std::vector<std::shared_ptr<Shape>> m_shapeArr;
};

#endif //TASK1_PICTUREDRAFT_H
