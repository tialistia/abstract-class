#include <iostream>
#include "PersegiPanjang.h"
#include "Segitiga.h"
#include "Lingkaran.h"

using namespace std;

int main()
{
    cout <<"                           ABSTRACT CLASS" << endl;
    cout <<"             MENGHITUNG LUAS & KELILING BANGUN RUANG " << endl;
    cout <<""<< endl;

    cout <<" 1. PersegiPanjang " << endl;
    PersegiPanjang pp;
    cout << "    Masukkan nilai panjang      = ";
    cin >> pp.p;
    cout << "    Masukkan nilai lebar        = ";
    cin >> pp.l;
    cout << "Hasil = " << pp.Luas();
    //pp.Keliling();

    cout <<"" << endl;
    cout <<" 2. Segitiga" << endl;
    Segitiga st;
    cout <<"    Masukkan nilai alas      = ";
    cin >> st.a;
    cout <<"    Masukkan nilai tinggi    = ";
    cin >> st.t;
    cout <<"    Masukkan nilai sisi      = ";
    cin >> st.s;
//    st.Luas();
//    st.Keliling();
    
    cout <<"" << endl;
    cout <<" 3. Lingkaran" << endl;
    Lingkaran lg;
    cout << "    Masukkan nilai jari-jari   = ";
    cin >> lg.r;
//    se.Luas();
//    se.Keliling();
    
    return 0;
}
