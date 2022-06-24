#include "cutelip.h"
#include <cmath>

cutelip :: cutelip(int xc_, int yc_, int zc_, int rx_, int ry_, int rz_)
{
    xc = xc_
    yc = yc_
    zc = zc_
    rx = rx_
    ry = ry_
    rz = rz_
}
void cutelip :: draw(sculptor &t)
{
    t.setColor(r,g,b,a);
    double dist;
    if(rx == 0)
    {
        for(int j=yc-ry; j<=yc+ry; j++)
        {
            for(int k=zc-rz; k<=zc+rz;k++)
            {
                dist = pow(j-yc,2)/pow(ry,2)+ pow(k-zc,2)/pow(rz,2);
                if(dist <=1)
                {
                    t.cutVoxel(xc,j,k);
                }
            }
        }
    }else if(ry == 0){
        for(int i=xc-rx; i<=xc+rx; i++)
        {
            for(int k=zc-rz; k<=zc+rz;k++)
            {
                dist = pow(i-xc,2)/pow(rx,2)+ pow(k-zc,2)/pow(rz,2);
                if(dist <=1)
                {
                    t.cutVoxel(i,yc,k);
                }
            }
        }
    } else if(rz==0){
        for(int i=xc-rx; i<=xc+rx; i++)
        {
            for(int j=yc-ry; j<=yc+ry;j++)
            {
                dist = pow(i-xc,2)/pow(rx,2)+ pow(j-yc,2)/pow(ry,2);
                if(dist <=1)
                {
                    t.cutVoxel(i,j,zc);
                }
            }
        }
    }else {
        for(int i=xc-rx; i<=xc+rx; i++)
        {
            for(int j=yc-ry; j<=yc+ry;j++)
            {
                for(int k=zc-rz; k<=zc+rz;k++)
                {
                   dist = pow(i-xc,2)/pow(rx,2)+ pow(j-yc,2)/pow(ry,2)+ pow(k-zc,2)/pow(rz,2);
                    if(dist <=1)
                    {
                        t.cutVoxel(i,j,k);
                    }
                }
            }
        }
    }
}
