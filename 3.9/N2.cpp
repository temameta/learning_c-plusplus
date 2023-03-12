#include <iostream>
#include <string>
using namespace std;

int max(int a, int b)
{
    if (a > b) return a;
    return b;
}
double max(double a, double b)
{
    if (a > b) return a;
    return b;
}

int main()
{
    int a,b;
    double c,d;
    cin >> a >> b >> c >> d;
    cout << max(a,b) << endl;
    cout << max(c,d);
}