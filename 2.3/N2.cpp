#include <iostream>
using namespace std;

int F(int n)
{
    if (n==1) return 1;
    if (n>1 && n%2==0) return n+F(n-1);
    if (n>1 && n%2!=0) return 2*F(n-2);
} 
int main()
{
    int n,m;
    cin >> n;
    cout << F(n);
}