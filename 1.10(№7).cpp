#include <iostream>
using namespace std;

int main()
{
    int arr[] {9,8,7,6,5,4,3,2,1,0};
    int sum_1 = 0, sum_2 = 0, i = 0, size_of_array;
    
    size_of_array = sizeof(arr)/sizeof(arr[0]);
    
    for (i; i<(size_of_array); i++) sum_1+=arr[i];
    for (i = 0; i<(size_of_array); i++) {
        if (arr[i] > (sum_1/size_of_array)) arr[i] = 1;
    }
    for (i = 0; i<(size_of_array); i++) sum_2+=arr[i];
    cout << sum_2;
    return 0;
}
