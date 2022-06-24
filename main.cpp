#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>
#include "sculptor.h"
#include "LerArquivos.h"

using namespace std;

int main()
{
    sculptor *champions;
    lerarquivos dg;
    vector<figura_geo *> figs;
    figs = dg.parse("entrada.txt");
    champions = new sculptor(dg.getDx(),dg.getDy(),dg.getDz());

    for(int i=0; (int) i < figs.size(); i++)
    {
        cout << "Desenhando" << endl;
        figs[i] -> draw(*champions);
    }

    champions -> writeOFF("Desenho.off");

    for(int i=0; (int) i < figs.size(); i++)
    {
        delete figs[i];
    }
    delete champions;

    return 0;
}
