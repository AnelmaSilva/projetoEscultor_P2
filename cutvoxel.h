#ifndef CUTVOXEL_H_INCLUDED
#define CUTVOXEL_H_INCLUDED
#include "sculptor.h"
#include "figura_geo.h"

class cutvoxel : public figura_geo
{
protected:
    int x,y,z;
public:
    cutvoxel(int x_, int y_, int z_);
    ~cutvoxel(){};

    void draw(sculptor &t);
};

#endif // CUTVOXEL_H_INCLUDED
