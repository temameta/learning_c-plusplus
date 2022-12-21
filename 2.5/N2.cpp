#include <iostream>

using namespace std;

int main()
{
    float a, b;
    float *pa = &a, *pb = &b;

    cin >> a >> b;

    if (*pa > *pb) {
        *pa *= 3;
        *pb -= 2;
    }
    else {
        *pa -= 2;
        *pb *= 3;
    }

    cout << a << endl << b;
    return 0;
}