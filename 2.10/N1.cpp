#include <iostream>

using namespace std;

struct coord
{
    int x;
    int y;
    int z;
};

int main()
{
    coord tochka[3];
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        cin >> tochka[i].x;
        //cin >> tochka[i].y;
        //cin >> tochka[i].z;
        sum += tochka[i].x;
    }
    cout << sum;
}