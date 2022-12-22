#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i<20; i++) {
        arr[i] = i*i*i;
        sum1 += arr[i];
        if (arr[i] % 2 == 0)
            arr[i] *= 2;
        sum2+=arr[i];
    }

    cout << sum1 - sum2;

    return 0;
}