#include <iostream>

using namespace std;

int main()
{
    int arr[20];

    for (int i = 0; i<20; i++) {
        arr[i] = i*i;
        cout << arr[i] << " ";
    }

    return 0;
}