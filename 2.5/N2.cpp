#include <iostream>

using namespace std;

int main()
{
    int a;
    int *ptr;
    int **ptr2;

    ptr = &a;

    *ptr = 100;

    ptr2 = &ptr;

    **ptr2 = 200;

    cout << a;
}