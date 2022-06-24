#ifndef PUTELIP_H_INCLUDED
#define PUTELIP_H_INCLUDED
#include "sculptor.h"
#include "figura_geo.h"

class putelip : public figura_geo
{
protected:
    int xc, int yc, int zc, int rx, int ry, int rz;
public:
    putelip(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_, int r_, int g_, int b_, int a_);
    ~putelip(){};

    void draw(sculptor &t);
};


#endif // PUTELIP_H_INCLUDED
