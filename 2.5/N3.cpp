#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int sum = 0;
    int *parr;

    for (int i = 0; i<10; i++)
        cin >> arr[i];

    parr = arr;

    for (int i = 0; i<10; i++) {
        sum += *parr;
        parr++;
    }
    
    cout << sum;
    return 0;
}