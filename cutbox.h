#ifndef CUTBOX_H_INCLUDED
#define CUTBOX_H_INCLUDED
#include "sculptor.h"
#include "figura_geo.h"

class cutbox : public figura_geo
{
protected:
    int x0,x1,y0,y1,z0,z1;
public:
    cutbox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_);
    ~cutbox(){};

    void draw(sculptor &t);
};
#endif // CUTBOX_H_INCLUDED
