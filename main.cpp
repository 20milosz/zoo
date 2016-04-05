#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "gatunki.h"
#include <string>


using namespace std;
/*
class Zwierze
{
public:
    virtual void daj_glos()=0;
    virtual void podaj_imie()
    {
        cout << "mam na imie "<<imie<< endl;
    }

    virtual void wyswietl_masa()
    {
        cout << "masa " << masa << endl;
    }
    int masa;
    string imie;

    Zwierze()
    {
        masa=0;
        imie="";
    }

    virtual ~Zwierze()
    {
    }
};
*/
/*
class Kon : public Zwierze
{
public:
    virtual void daj_glos()
    {
        cout << "ihaaa" << endl;
    }

    Kon()
    {
        masa=128;
    }
    Kon(string imie)
    {
        masa=128;
        this->imie=imie;
    }

};

class Osiol : public Zwierze
{
public:
    virtual void daj_glos()
    {
        cout << "duuuuurny" << endl;
    }

    Osiol()
    {
        masa=168;
    }

    Osiol(string imie)
    {
        masa=168;
        this->imie=imie;
    }
};
*/
class Rzeznia
{
protected:
    vector <Zwierze*> v;
public:

    void dodaj(Zwierze* z)
    {
        v.push_back(z);
        cout << "Dodany do rzezni"<<endl;

    }

    void usmierc()
    {
        for(int i=v.size()-1;i>=0;i--){
            delete v.at(i);
            v.pop_back();
        }
    }

};

class Fabryka_zwierzakow
{
public:
    Zwierze* wytworz_zwierze(string imie)
    {


        if(rand()%100 > 50)
            return new Osiol(imie);
        else
            return new Kon(imie);
    }
};

class Zoo
{
protected:
    vector <Zwierze*> v;

public:

    int ile()
    {
        return v.size();
    }

    int masa()
    {
        int m=0;
        for(int i=0; i<ile(); i++)
        {
            m=m+v.at(i)->masa;
        }
        return m;
    }

    bool dodaj_zwierze(Zwierze* z)
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

    Zwierze* odczytaj(int i)
    {
        return v.at(i);;
    }
};


int main()
{

    srand(time(NULL));


    Zoo* z = new Zoo();
    Rzeznia rz;
    Fabryka_zwierzakow f;
    Zwierze *zw;

    for(int i=0; i<10; i++){
        zw = f.wytworz_zwierze("sdf");
        if(z -> dodaj_zwierze(zw)==false)
        {
            rz.dodaj(zw);
            rz.usmierc();
        }
    }


    return 0;
}
