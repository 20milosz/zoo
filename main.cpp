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
