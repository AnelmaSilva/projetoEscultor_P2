#ifndef LERARQUIVOS_H_INCLUDED
#define LERARQUIVOS_H_INCLUDED
#include <vector>
#include "figura_geo.h"
#include <string>

using namespace std;

class lerarquivos
{
    int dimX, dimY, dimZ;
    float r,g,b,a;

public:
    lerarquivos();
    vector <figura_geo *> parse(string filename);
    int getDx();
    int getDy();
    int getDz();
};


#endif // LERARQUIVOS_H_INCLUDED
