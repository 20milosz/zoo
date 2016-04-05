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

};


#endif // ZOO_H
