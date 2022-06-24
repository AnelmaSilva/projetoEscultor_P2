#include "LerArquivos.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "putbox.h"
#include "putelip.h"
#include "putesfera.h"
#include "putvoxel.h"
#include "sculptor.h"
#include "voxel.h"
#include "cutbox.h"
#include "cutelip.h"
#include "cutesfera.h"
#include "cutvoxel.h"
#include "figura_geo.h"

using namespace std;

lerarquivos :: lerarquivos()
{

}
vector <figura_geo *> lerarquivos :: parse(string filename)
{
    vector<figura_geo   *> figs;
    ifstream entrada;
    stringstream ss;
    string s, token;

    entrada.open(filename.c_str());

    cout <<"Abrindo arquivo" << filename<<" ... "<< endl;
    if(!entrada.is_open())
    {
        cout <<"erro ao abrir arquivo\n";
        exit(0);
    }

    while (entrada.good())
    {
        getline(entrada,s);
        if(entrada.good())
        {
            ss.clear();
            ss.str(s);
            ss >>token;

            if(ss.good())
            {
                if(token.compare("dim") == 0)
                {
                    ss >> dimX >> dimY >> dimZ;
                }
                else if (token.compare("putvoxel")==0)
                {
                    int x0,y0,z0;
                    ss >>x0>>y0>>z0>>r>>g>>b>>a;
                    figs.push_back(new putvoxel(x0,y0,z0,r,g,b,a));
                }
                else if (token.compare("cutvoxel")==0)
                {
                    int x0,y0,z0;
                    ss >>x0>>y0>>z0;
                    figs.push_back(new cutvoxel(x0,y0,z0));
                }
                else if (token.compare("putbox")==0)
                {
                    int x0,x1,y0,y1,z0,z1;
                    ss >>x0>>x1>>y0>>y1>>z0>>z1>>r>>g>>b>>a;
                    figs.push_back(new putbox(x0,x1,y0,y1,z0,z1,r,g,b,a));
                }
                else if (token.compare("cutbox")==0)
                {
                    int x0,x1,y0,y1,z0,z1;
                    ss >>x0>>x1>>y0>>y1>>z0>>z1;
                    figs.push_back(new cutbox(x0,x1,y0,y1,z0,z1));
                }
                else if (token.compare("putesfera")==0)
                {
                    int xc,yc,zc,raio;
                    ss >>xc>>yc>>zc>>raio>>r>>g>>b>>a;
                    figs.push_back(new putesfera(xc,yc,zc,raio,r,g,b,a));
                }
                else if (token.compare("cutesfera")==0)
                {
                    int xc,yc,zc,raio;
                    ss >>xc>>yc>>zc>>raio;
                    figs.push_back(new cutesfera(xc,yc,zc,raio));
                }
                else if (token.compare("putelip")==0)
                {
                    int xc,yc,zc,rx,ry,rz;
                    ss >>xc>>yc>>zc>>rx>>ry>>rz>>r>>g>>b>>a;
                    figs.push_back(new putelip(xc,yc,zc,rx,ry,rz,r,g,b,a));
                }
                else if (token.compare("cutelip")==0)
                {
                    int xc,yc,zc,rx,ry,rz;
                    ss >>xc>>yc>>zc>>rx>>ry>>rz;
                    figs.push_back(new cutelip(xc,yc,zc,rx,ry,rz));
                }
            }
        }

    }
    entrada.close();
    return (figs);
}
int lerarquivos :: getDx()
{
    return dimX;
}
int lerarquivos :: getDy()
{
    return dimY;
}
int lerarquivos :: getDz()
{
    return dimZ;
}
