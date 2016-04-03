#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Zwierze
{
public:
    virtual void daj_glos()=0;
    virtual void powiedz_imie()=0;
    virtual void wyswietl_masa()=0;

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

class Kon : public Zwierze
{
public:
    virtual void daj_glos()
    {
        cout << "ihaaa" << endl;
    }
    virtual void powiedz_imie()
    {
        cout << "mam na imie: "<<imie << endl;
    }
    virtual void wyswietl_masa()
    {
        cout << "masa " << masa << endl;
    }
    Kon()
    {
        masa=128;
    }
    Kon(string imie)
    {
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
    virtual void powiedz_imie()
    {
        cout << "mam na imie: "<<imie << endl;
    }
    virtual void wyswietl_masa()
    {
        cout << "masa" << endl;
    }
    Osiol()
    {
        masa=168;
    }

    Osiol(string imie)
    {
        this->imie=imie;

    }
};

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
        for(int i=v.size()-1;i==0;i--){
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
            z->powiedz_imie();
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
        zw = f.wytworz_zwierze("2");
        if(z -> dodaj_zwierze(zw)==false)
        {
            rz.dodaj(zw);
            rz.usmierc();
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    vector <Zwierze*> zwierzaki;
    zwierzaki.push_back(new Kon());
    zwierzaki.push_back(new Osiol());
    zwierzaki.push_back(new Kon());
    zwierzaki.push_back(new Osiol());
    zwierzaki.at(0)->daj_glos();



    return 0;
}
