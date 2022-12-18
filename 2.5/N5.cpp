#include <iostream>

using namespace std;

int main()
{
    float a, b;
    float *ptr1 = &a, *ptr2 = &b;

    cin >> a >> b;

    if (*ptr1 > *ptr2) {
        *ptr1 += 7;
        *ptr2 -= 3;
    }
    else {
        *ptr1 -= 3;
        *ptr2 += 7;
    }

    cout << a << "\n" << b;
}