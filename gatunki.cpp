#include "gatunki.h"
#include <cstdlib>
#include <iostream>

using namespace std;


   Kon:: Kon()
    {
        masa=128;
    }
    Kon::Kon(string imie)
    {
        masa=128;
        this->imie=imie;
    }


     void Kon::daj_glos()
    {
        cout << "ihaaa" << endl;
    }




     void Osiol::daj_glos()
    {
        cout << "duuuuurny" << endl;
    }

    Osiol::Osiol()
    {
        masa=168;
    }

    Osiol::Osiol(string imie)
    {
        masa=168;
        this->imie=imie;
    }
