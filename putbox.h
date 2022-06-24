#ifndef PUTBOX_H_INCLUDED
#define PUTBOX_H_INCLUDED
#include "figura_geo.h"
#include "sculptor.h"
#include "voxel.h"

class putbox : public figura_geo
{
    int x0,x1,y0,y1,z0,z1;

public:
    putbox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r_, float g_, float b_, float a_);
    ~putbox(){};
    void draw(sculptor &t);
};

#endif // PUTBOX_H_INCLUDED
