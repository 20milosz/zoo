#include <string>
#include "Zwierze.h"

class Kon : public Zwierze
{
public:

      Kon();

    Kon(std::string imie);
    virtual void daj_glos();




};

class Osiol : public Zwierze
{
public:
    virtual void daj_glos();

    Osiol();

    Osiol(std::string imie);
};
