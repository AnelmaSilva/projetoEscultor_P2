#ifndef FIGURA_GEO_H_INCLUDED
#define FIGURA_GEO_H_INCLUDED
#include "sculptor.h"

class figura_geo
{
protected:
    float r,g,b,a;
public:
    figura_geo();

    virtual ~figura_geo(){};
    virtual void draw(sculptor &t)=0;

};

#endif // FIGURA_GEO_H_INCLUDED
