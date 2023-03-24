#include <iostream>
using namespace std;

int F(int);
int G(int);

int F(int n)
{
    if (n==1) return 1;
    if (n>1) return 2*G(n-1)+5*n;
} 
int G(int n)
{
    if (n==1) return 1;
    if (n>1) return F(n-1)+2*n;
}
int main()
{
    int n,m;
    cin >> n >> m;
    cout << F(n)+G(m);
}