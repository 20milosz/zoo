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
        z -> podaj_imie();
        z -> daj_glos();
        z -> wyswietl_masa();
        cout << "Masa zoo to: "<<masa() << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool Zoo::usun_zwierze(Zwierze* z)
{
    vector<Zwierze*>::iterator it;

    for(it=v.begin(); it!=v.end(); ++it){

        if(*it==z)
        {
            v.erase(it);
            return true;
        }
    }
    return false;


}

Zwierze* Zoo::odczytaj(int i)
{
    return v.at(i);
}
int Zoo:: odczytaj_rozmiar(){

    return v.size();
}


void Zoo::wyslij_do_rzezni(Rzeznia* rz, Zwierze* z)
{
    if(z -> usun_zwierze(z->odczytaj(1))==false){
        cout<< "Nie odnaleziono zwierzaka"<<endl;
    }
    rz->dodaj(z);




}

