#include <iostream>
#include <cmath>

using namespace std;

struct coord
{
    float x;
    float y;
};

int main()
{
    coord tochka[5];
    float rasst = 0, minrasst = 0;
    int nomer;
    for (int i = 0; i < 5; i++) {
        cin >> tochka[i].x;
        cin >> tochka[i].y;
    }
    coord tochkaA;
    cin >> tochkaA.x;
    cin >> tochkaA.y;
    minrasst = sqrt(((tochka[0].x - tochkaA.x)*(tochka[0].x - tochkaA.x)) + ((tochka[0].y - tochkaA.y)*(tochka[0].y - tochkaA.y)));
    for (int i = 0; i < 5; i++) {
        rasst = sqrt(((tochka[i].x - tochkaA.x)*(tochka[i].x - tochkaA.x)) + ((tochka[i].y - tochkaA.y)*(tochka[i].y - tochkaA.y)));
        if (rasst < minrasst) {
            minrasst = rasst;
            nomer = i;
        }
    }
    cout << "x=" << tochka[nomer].x << endl;
    cout << "y=" << tochka[nomer].y << endl;
}