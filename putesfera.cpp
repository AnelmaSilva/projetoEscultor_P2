#include "putesfera.h"

putesfera :: putesfera(int xc_, int yc_, int zc_, int raio_, float r_, float g_, float b_, float a_)
{
    xc = xc_;
    yc = yc_;
    zc = zc_;
    r = r_;
    g = g_;
    b = b_;
    a = a_;
}
void putbox :: draw(sculptor &t)
{
    t.setColor(r,g,b,a);
    double dist = raio*raio;
    for(int i=xc-raio; i<xc+raio; i++)
    {
        for(int j=yc-raio; j<yc+raio; j++)
        {
            for(int k= zc-raio; k<zc+raio; k++)
            {
                if(static_cast<double>(i-xc)*static_cast<double>(i-xc)+ static_cast<double> (j-yc)*static_cast<double>(j-yc)+static_cast<double>(i-zc)*static_cast<double>(i-zc))
                {
                    t.putVoxel(x,y,z);
                }
            }
        }
    }
}
