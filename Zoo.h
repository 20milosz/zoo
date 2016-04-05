#ifndef ZOO_H
#define ZOO_H
#include<vector>
#include "Rzeznia.h"
class Zoo
{
protected:
    std::vector <Zwierze*> v;
public:

    int ile();
    int masa();
    bool dodaj_zwierze(Zwierze* z);
    Zwierze* odczytaj(int i);
    int odczytaj_rozmiar();
    bool usun_zwierze(Zwierze* z);
    void wyslij_do_rzezni(Rzeznia* rz, Zwierze* z);
};


#endif // ZOO_H
