#include "Zwierze.h"
#include <cstdlib>
#include <iostream>

using namespace std;


Zwierze::Zwierze()
{
    masa=0;
    imie="";
}

Zwierze::~Zwierze()
{
    //dtor
}


void Zwierze::podaj_imie()
    {
        cout << "mam na imie "<<imie<< endl;
    }


void Zwierze::wyswietl_masa()
    {
        cout << "masa " << masa << endl;
    }

