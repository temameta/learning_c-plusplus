#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1) return 1;
    if (n%2!=0 && n > 1) return n + f(n-2);
    if (n%2==0) return n * f(n-1);
}

int main()
{
    cout << f(5);
}