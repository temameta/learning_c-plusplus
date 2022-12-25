#include <iostream>
using namespace std;

void func(int kolvo, int *x);

int main()
{
    int arr[10];
    int *p;
    
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    p = arr;

    func(10, p);

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
        
    return 0;
}
void func(int kolvo, int *x)
{
    for (int i = 0; i < 10; i++)
        x[i] *= 2;
}