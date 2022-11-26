#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] {};
    int count = 0;
    float sum = 0.0, kolvo = 0.0, sr = 0.0;
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++) 
            arr[i][j] = i*3+j+1;

    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            if (arr[i][j] % 2 != 0) {
                sum += arr[i][j];
                kolvo++;
            }
    
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++)
            if ((arr[i][j] % 2 == 0) && arr[i][j] > (sum/kolvo)) 
                count++;
    
    cout << count;
    return 0;
}
