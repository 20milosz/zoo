#include "Rzeznia.h"
#include <cstdlib>
#include <iostream>

using namespace std;

  void Rzeznia::dodaj(Zwierze* z)
    {
        v.push_back(z);
        cout << "Dodany do rzezni"<<endl;

    }
  void Rzeznia::usmierc()
    {
        for(int i=v.size()-1;i>=0;i--){
            delete v.at(i);
            v.pop_back();
        }
    }
