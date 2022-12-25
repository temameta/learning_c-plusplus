#include <iostream>
using namespace std;

void func(int *x1, int *x2);

int main()
{
    int n1, n2;
    int *p1 = &n1, *p2 = &n2;

    cin >> n1 >> n2;

    func(p1, p2);

    cout << n1 << " " << n2;
}
void func(int *x1, int *x2)
{
    // *x1 += *x2;
    // *x2 = *x1 - *x2;
    // *x1 -= *x2;
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}