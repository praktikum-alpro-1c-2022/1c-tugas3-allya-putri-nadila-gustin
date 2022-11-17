#include <iostream>
using namespace std;

int main(){

    float I,V,R;

cout << "______________________" << endl;
cout << "                      " << endl;
cout << "Menghitung arus(I)    " << endl;
cout << "______________________" << endl;
cout << "                      " << endl;
cout << "Masukkan V = ";
cin >> V;
cout << "Masukkan R = ";
cin >> R;
//rumus arus
I = V/R;
cout << "Arus (I)   = " << I << endl;


cout << "                        " << endl;
cout << "_______________________" << endl;
cout << "                       " << endl;
cout << "Menghitung Tegangan(V) " << endl;
cout << "_______________________" << endl;
cout << "                       " << endl;
cout << "Masukkan I   = ";
cin >> I;
cout << "Masukkan R   = ";
cin >> R;
//rumus tegangan
V = I * R;
cout << "Tegangan (V) = " << V << endl;



cout << "                        " << endl;
cout << "________________________" << endl;
cout << "                        " << endl;
cout << "Menghitung Hambatan (R) " << endl;
cout << "________________________" << endl;
cout << "                        " << endl;
cout << "Masukkan V   = ";
cin >> V;
cout << "Masukkan I   = ";
cin >> I;
//rumus hambatan
R = V/I;
cout << "Hambatan (R) = " <<   R   << endl;
cout << "________________________" << endl;


return 0;
}
