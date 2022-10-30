#include "Painter.h"

void Painter::DrawPicture(const PictureDraft& draft, ICanvas& canvas)
{
    for (size_t i = 0; i < draft.GetShapeCount(); ++i)
    {
        draft.GetShape(i)->Draw(canvas);
    }
}