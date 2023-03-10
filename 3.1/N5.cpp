#include <iostream>
using namespace std;

int main()
{
    char a[5] {};
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
        cout << a[i];
}