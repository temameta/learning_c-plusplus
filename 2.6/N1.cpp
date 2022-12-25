#include <iostream>
using namespace std;

void func(int *x);

int main()
{
    int n;
    int *p = &n;

    cin >> n;

    func(p);

    cout << n;
    return 0;
}
void func(int *x)
{
    *x *= 10;
}