#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x>0) cout << x*2;
    if (x<0) cout << x*x;
    if (x==0) cout << 0;
    return 0;
}
