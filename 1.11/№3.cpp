#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] {};
    int sum = 0;
    
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++) {
            arr[i][j] = i*3+j+1;
            if (i == j) 
                sum += arr[i][j];
        }

    cout << sum;
    return 0;
}
