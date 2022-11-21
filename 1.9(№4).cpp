#include <iostream>

using namespace std;

int main()
{
    int a, b, step;
    cin >> a >> b;
    step = a;
    for (int i = 1; i < b; i++) a*=step;
    cout << a << endl;
    return 0;
}
