#ifndef CUTELIP_H_INCLUDED
#define CUTELIP_H_INCLUDED
#include "sculptor.h"
#include "figura_geo.h"

class cutelip : public figura_geo
{
protected:
    int xc, yc, zc, rx, ry, rz;
public:
    cutelip(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_);
    ~cutelip(){};

    void draw(sculptor &t);
};

#endif // CUTELIP_H_INCLUDED
