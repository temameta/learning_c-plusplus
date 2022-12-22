#include <iostream>

using namespace std;

int main()
{
    int arr[11];

    for (int i = 0; i < 11; i++)
        cin >> arr[i];

    for (int i = 0; i < 11; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 10; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}