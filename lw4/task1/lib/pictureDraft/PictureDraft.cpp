#include "PictureDraft.h"

#include <utility>

PictureDraft::PictureDraft(std::vector<std::shared_ptr<Shape>>  shapeArr)
        : m_shapeArr(std::move(shapeArr))
{
}

size_t PictureDraft::GetShapeCount() const
{
    return m_shapeArr.size();
}

std::shared_ptr<Shape> PictureDraft::GetShape(size_t index) const
{
    if (index >= m_shapeArr.size())
    {
        throw std::out_of_range("index " + std::to_string(index) + " out of range " + std::to_string(m_shapeArr.size()));
    }
    return m_shapeArr[index];
}