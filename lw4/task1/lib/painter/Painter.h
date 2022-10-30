#ifndef TASK1_PAINTER_H
#define TASK1_PAINTER_H

#include "lib/canvas/ICanvas.h"
#include "lib/pictureDraft/PictureDraft.h"

class Painter
{
public:
    static void DrawPicture(const PictureDraft& draft, ICanvas& canvas) ;
};

#endif //TASK1_PAINTER_H
