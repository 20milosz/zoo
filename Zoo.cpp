#include "Zoo.h"
#include <iostream>
using namespace std;

    int Zoo:: ile()
    {
        return v.size();
    }

    int Zoo:: masa()
    {
        int m=0;
        for(int i=0; i<ile(); i++)
        {
            m=m+v.at(i)->masa;
        }
        return m;
    }

    bool Zoo::dodaj_zwierze(Zwierze* z)
    {

        if(masa()+z->masa<1000)
        {
            v.push_back(z);
            z -> daj_glos();
            z -> wyswietl_masa();
            z -> podaj_imie();
            cout << masa() << endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    Zwierze* Zoo::odczytaj(int i)
    {
        return v.at(i);;
    }

