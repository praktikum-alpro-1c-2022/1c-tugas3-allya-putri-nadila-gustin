#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a=75, b=70, c=88, praktikum, uts, uas;

    praktikum = a * 20/100;
    uts = b * 30/100;
    uas = c * 50/100;

    cout << "__________________________________________" << endl;
    cout << "                                          " << endl;
    cout << " Menghitung Nilai Akhir Mahasiswa         " << endl;
    cout << "__________________________________________" << endl;
    cout << "                                          " << endl;
    cout << " Nilai Praktikum menyumbang (20%)   = " << praktikum << endl;
    cout << " Nilai UTS menyumbang (30%)         = " << uts << endl;
    cout << " Nilai UAS menyumbang (50%)         = " << uas << endl;
    cout << "                                      " << endl;

    cout << " Total nilai akhir mahasiswa        = " << (praktikum + uts + uas) << endl;
    cout << "__________________________________________" << endl;

return 0;
}
