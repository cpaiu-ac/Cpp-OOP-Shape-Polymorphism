#include "Cerc.h"
#include "Dreptunghi.h"
#include <iostream>
#include <vector>
Figura *figCuArieMax(std::vector<Figura *> figuri)
{
    double arieMax = 0;
    Figura *figMax = nullptr;
    for(std::vector<Figura *>::iterator i = figuri.begin(); i!= figuri.end(); i++)
    {
        if((*i)->arie() > arieMax)
        {
            arieMax = (*i)->arie();
            figMax = *i;
        }
    }
    return figMax;
}
int main()
{
    Dreptunghi d1(1, 2, 4, 4);
    Cerc c1(1, 1, 3);
    Figura *dr = &d1;
    Figura *cerc = &c1;
    dr->afisare();
    cerc->afisare();
    std::vector<Figura *> figuri;
    Dreptunghi d2(0, 0, 2, 5);
    Dreptunghi d3(0, 0, 2, 2);
    Cerc c2(0, 0, 3);
    figuri.push_back(&d2);
    figuri.push_back(&d3);
    figuri.push_back(&c2);
    Figura *figMax = figCuArieMax(figuri);
    std::cout << "Dintre figurile: " << std::endl;
    for(std::vector<Figura *>::iterator i = figuri.begin(); i!= figuri.end(); i++)
        (*i)->afisare(); 
    std::cout << std::endl << "aria maxima o are: " << std::endl;
    figMax->afisare();
    return 0;
}