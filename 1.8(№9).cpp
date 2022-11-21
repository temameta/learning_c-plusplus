#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    while (a!=(b+1))
    {
        cout << a << endl;
        a++;
    }
    return 0;
}
