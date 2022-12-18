#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int *ptr1 = &a, *ptr2 = &b;

    cin >> a >> b;

    if (*ptr1 > *ptr2)
        *ptr1+=2;
    else    
        *ptr2-=2;

    cout << a << "\n" << b;
}