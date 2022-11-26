#include <iostream>

using namespace std;

int main()
{
    int n, fak = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        fak*=i;
    cout << fak << endl;
    return 0;
}
