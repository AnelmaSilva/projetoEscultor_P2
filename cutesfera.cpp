#include "cutesfera.h"

cutesfera :: cutesfera(int xc_, int yc_, int zc_, int raio_)
{
    xc = xc_;
    yc = yc_;
    zc = zc_;
    raio = raio_;
}
void cutesfera :: draw(sculptor &t)
{
    double dist = raio*raio;
    for(int i=xc-raio; i<xc+raio; i++)
    {
        for(int j=yc-raio; j<yc+raio; j++)
        {
            for(int k= zc-raio; k<zc+raio; k++)
            {
                if(static_cast<double>(i-xc)*static_cast<double>(i-xc)+ static_cast<double> (j-yc)*static_cast<double>(j-yc)+static_cast<double>(i-zc)*static_cast<double>(i-zc))
                {
                    t.cutVoxel(x,y,z);
                }
            }
        }
    }
}

