#include <iostream>
using namespace std;

int F(int n)
{
    if (n==1) return 1;
    if (n==2) return 2;
    if (n>2) return (2*F(n-1)+(n-2)*F(n-2));
    return 0;
}

int main()
{
    cout << F(6);
}