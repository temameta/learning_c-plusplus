#include <iostream>
using namespace std;

int main()
{
    int arr[] {9,8,7,6,5,4,3,2,1,0}, count = 0;
    for (int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++) {
        if (arr[i] % 3 == 0) count++;
    }
    cout << count;
    return 0;
}
