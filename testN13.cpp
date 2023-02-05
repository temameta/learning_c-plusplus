#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1) return 1;
    if (n > 1) return 2*f(n-1)+1;
}

int main()
{
    cout << f(5);
}