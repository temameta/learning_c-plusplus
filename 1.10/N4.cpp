#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int count = 0;
    float sum = 0.0, sr = 0.0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sr = sum/10;

    for (int i = 0; i< 10; i++)
        if (arr[i] > sr)
            count++;
    
    cout << count;

    return 0;
}