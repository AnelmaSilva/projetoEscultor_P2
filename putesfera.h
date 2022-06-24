#ifndef PUTESFERA_H_INCLUDED
#define PUTESFERA_H_INCLUDED
#include "sculptor.h"
#include "figura_geo.h"

class putesfera : public figura_geo
{
protected:
    int xc, yc,zc, raio;
public:
    putesfera(int xc_, int yc_, int zc_, int raio_, float r_, float g_, float b_, float a_);
    ~putesfera(){};
    void draw(sculptor &t);
};
#endif // PUTESFERA_H_INCLUDED
