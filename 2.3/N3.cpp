#include <iostream>
using namespace std;

int F(int n)
{
    if (n==1 || n==2) return 1;
    if (n>2) return F(n-2)*n;
} 
int main()
{
    int n,m;
    cin >> n;
    cout << F(n);
}