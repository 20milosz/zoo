#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "Rzeznia.h"
#include "Fabryka_zwierzakow.h"
#include "Zoo.h"
using namespace std;

int main()
{

    srand(time(NULL));


    Zoo* z = new Zoo();
    Rzeznia rz;
    Fabryka_zwierzakow f;
    Zwierze *zw;

    /*for(int i=0; i<10; i++){
        zw = f.wytworz_zwierze("sdf");
        if(z -> dodaj_zwierze(zw)==false)
        {
            rz.dodaj(zw);
            rz.usmierc();
        }
    }*/

    zw = f.wytworz_zwierze("Zenon");
    z -> dodaj_zwierze(zw);
    zw = f.wytworz_zwierze("Kasia");
    z -> dodaj_zwierze(zw);
    zw = f.wytworz_zwierze("Janek");
    z -> dodaj_zwierze(zw);
    zw = f.wytworz_zwierze("Zosia");
    z -> dodaj_zwierze(zw);

    cout<< endl;
    cout<< endl;
    cout<< endl;

    for(int i=0; i<z->odczytaj_rozmiar(); i++){

        zw = z->odczytaj(i);
        zw -> podaj_imie();
        zw -> daj_glos();

    }

    cout<< endl;
    cout<< endl;
    cout<< endl;


    if(z -> usun_zwierze(z->odczytaj(1))==false){
        cout<< "Nie odnaleziono zwierzaka w zoo"<<endl;
    }

    for(int i=0; i<z->odczytaj_rozmiar(); i++){

        zw = z->odczytaj(i);
        zw -> podaj_imie();
        zw -> daj_glos();

    }



    return 0;
}
