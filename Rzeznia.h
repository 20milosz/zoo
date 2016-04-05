#ifndef RZEZNIA_H
#define RZEZNIA_H
#include <vector>
#include "gatunki.h"
class Rzeznia
{
protected:
    std::vector <Zwierze*> v;
public:
    void dodaj(Zwierze* z);
    void usmierc();
};

#endif // RZEZNIA_H
