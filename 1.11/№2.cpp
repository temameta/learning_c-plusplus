#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] {};
    
    for (int i = 0; i<3; i++)
        for (int j = 0; j<3; j++) {
            arr[i][j] = i*3+j+1;
            if (j==1 && i == 1) 
                cout << arr[i][j];
        }

    return 0;
}
