#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a,b;
    float c;

    a = 8;
    b = 10;

    cout << "__________________________________________" << endl;
    cout << "                                          " << endl;
    cout << "Menghitung sisi miring segitiga (c)  " << endl;
    cout << "__________________________________________" << endl;
    cout << "                                          " << endl;
    cout << "                                     " << endl;

    // rumus sisi miring segitiga phytagoras
    c = sqrt((a*a)+(b*b));

    cout << " Diketahui : " << endl;
    cout << " a = 8 "       << endl;
    cout << " b = 10 "      << endl;
    cout << "                                     " << endl;
    cout << " Rumus c^2 = a^2 + b^2               " << endl;
    cout << "       c^2 = 8(8)+ 10(10)            " << endl;
    cout << "                                     " << endl;
    cout << " Sisi Miring (c) = " << c;
    cout << "                                     " << endl;
    cout << "__________________________________________" << endl;

return 0;
}


