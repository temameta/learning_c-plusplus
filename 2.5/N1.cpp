#include <iostream>

using namespace std;

int main()
{
    float a, b;
    float *pa = &a, *pb = &b;

    cin >> a >> b;

    *pa *= 3;

    *pa += *pb;
    *pb = *pa - *pb;
    *pa -= *pb;

    cout << a << endl << b;
    return 0;
}