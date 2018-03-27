#include <iostream>
#include "PersegiPanjang.h"

using namespace std;

class PersegiPanjang {
	
public:
   
    int p;
    int l;
    
    visual void Luas() {
        cout <<"    Luas persegi           = " << (p*l) << endl;
    }
    visual void Keliling() {
        cout <<"    Keliling persegi       = "<<(2*(p+l)) << endl;
    }
};
