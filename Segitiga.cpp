#include <iostream>
#include "Segitiga.h"

class Segitiga
{
public :
	
	int a;
    int t;
    int s;
   
    virtual void Luas()
    {
        cout <<"    Luas segitiga            = "<<((a*t)/2) << endl;
    }
    virtual void Keliling()
    {
        cout <<"    Keliling segitiga        = "<<(s*s*s) << endl;
    }
};
