#ifndef SCULPTOR_H_INCLUDED
#define SCULPTOR_H_INCLUDED
#include "voxel.h"

class sculptor
{
protected:
    voxel ***v;
    int nx,ny,nz;
    float r,g,b,a;

public:
    sculptor(int _nx=1, int _ny=1, int _nz=1);

    ~sculptor();

    void setColor(float r, float g, float b, float a);
    void putvoxel(int x, int y, int z);
    void cutvoxel(int x, int y, int z);
    void writeOFF(const char* filename);
};
#endif // SCULPTOR_H_INCLUDED
