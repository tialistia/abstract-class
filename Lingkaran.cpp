#include <iostream>
#include "Lingkaran.h"

class Lingkaran {
public:
	
  	int r;
   
    virtual void Luas()
    {
        cout <<"    Luas lingkaran           = " << (3.14*r*r) << endl;
    }
    virtual void Keliling()
    {
        cout <<"    Keliling lingkaran       = "<<(2*3.14*r) << endl;
    }
};
