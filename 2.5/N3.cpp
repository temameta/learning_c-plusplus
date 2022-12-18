#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int *ptr1 = &a, *ptr2 = &b;

    cin >> a >> b;

    *ptr1*=2;

    *ptr1 += *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 -= *ptr2;

    cout << a << "\n" << b << endl;
}