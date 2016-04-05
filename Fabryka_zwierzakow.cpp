#include "Fabryka_zwierzakow.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


    Zwierze* Fabryka_zwierzakow::wytworz_zwierze(std::string imie)
    {
        if(rand()%100 > 50)
            return new Osiol(imie);
        else
            return new Kon(imie);
    }
