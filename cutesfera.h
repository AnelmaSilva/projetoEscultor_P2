#ifndef CUTESFERA_H_INCLUDED
#define CUTESFERA_H_INCLUDED
#include "sculptor.h"
#include "figura_geo.h"

class cutesfera : public figura_geo
{
protected:
    int xc, yc, zc, raio;
public:
    cutesfera(int xc_, int yc_, int zc_, int raio_);
    ~cutesfera(){};

    void draw(sculptor &t);
};


#endif // CUTESFERA_H_INCLUDED
