#ifndef TASK1_DESIGNER_H
#define TASK1_DESIGNER_H

#include "IDesigner.h"
#include "lib/factory/shapeFactory/IShapeFactory.h"

class Designer : public IDesigner
{
public:
    explicit Designer(std::shared_ptr<IShapeFactory> factory);
    ~Designer() override = default;

    PictureDraft CreateDraft(std::istream& stream) override;

private:
    std::shared_ptr<IShapeFactory> m_factory;
};


#endif //TASK1_DESIGNER_H
