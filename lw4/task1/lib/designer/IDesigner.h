#ifndef TASK1_IDESIGNER_H
#define TASK1_IDESIGNER_H

#include "lib/pictureDraft/PictureDraft.h"

class IDesigner
{
public:
    virtual ~IDesigner() = default;

    virtual PictureDraft CreateDraft(std::istream& stream) = 0;
};

#endif //TASK1_IDESIGNER_H
