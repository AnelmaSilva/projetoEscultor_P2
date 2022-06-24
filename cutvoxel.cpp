#include "cutvoxel.h"

cutvoxel :: cutvoxel(int x_, int y_, int z_)
{
    x = x_;
    y = y_;
    z = z_;
}
void cutvoxel :: draw(sculptor &t)
{
    t.cutvoxel(x,y,z);
}
