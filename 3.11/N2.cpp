#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (a+2*b < 0) throw 1;
        cout << sqrt(a+2*b);
    }
    catch(...)
    {
        cout << "Error" << endl;
    }
    return 0;
}