#include <iostream>

using namespace std;

int main()
{
    int a;
    int *ptr;

    ptr = &a;

    *ptr = 100;

    cout << *ptr;

    return 0;
}