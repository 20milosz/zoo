#include <string>
class Zwierze
{
public:
    Zwierze();
    virtual ~Zwierze();

    virtual void daj_glos()=0;
    virtual void podaj_imie();
    virtual void wyswietl_masa();
    int masa;
    std::string imie;

};

