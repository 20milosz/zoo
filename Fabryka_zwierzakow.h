#ifndef FABRYKA_ZWIERZAKOW_H
#define FABRYKA_ZWIERZAKOW_H
#include "Rzeznia.h"
#include<string>
class Fabryka_zwierzakow
{
public:
    Zwierze* wytworz_zwierze (std::string imie);

};


#endif // FABRYKA_ZWIERZAKOW_H
