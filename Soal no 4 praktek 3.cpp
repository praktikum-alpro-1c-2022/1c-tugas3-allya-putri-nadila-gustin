#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float b = 25,x = 15,c = 20, y;

    cout << "____________________________________________" << endl;
    cout << "                                            " << endl;
    cout << " Menghitung Sebuah Persamaan  " << endl;
    cout << "____________________________________________" << endl;
    cout << "                                            " << endl;
    cout << " Diketahui persamaan : Y = bx^2 + 0,5x - c  " << endl;
    cout << " b = 25 " << endl;
    cout << " x = 15 " << endl;
    cout << " c = 20 " << endl;
    cout << "                                            " << endl;

    //rumus
    y = b *(x * x ) + 0.5 * x - c;
    cout << " Y = bx^2 + 0,5x – c " << endl;
    cout << " Y = 25(15)^2 + 0,5(15) - 20  " << endl;
    cout << " Y = " << y << endl;

return 0;
}

