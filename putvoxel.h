#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "sculptor.h"
#include "figura_geo.h"

class putvoxel : figura_geo
{
protected:
    int x,y,z;
public:
    putvoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_);
    ~putvoxel(){};

    void draw(sculptor &t);
};
#endif // PUTVOXEL_H
