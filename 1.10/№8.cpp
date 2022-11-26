#include <iostream>
using namespace std;

int main()
{
    int arr1[10] {0,1,2,3,4,5,6,7,8,9}, arr2[10], arr3[10];
    int i = 0, sum = 0;
    
    for (i = 0; i<10; i++) arr2[i] = (arr1[i]+(i*4));
    for (i = 0; i<10; i++) arr3[i] = arr1[i]+arr2[i];
    for (i = 0; i<10; i++) sum+=arr3[i];
    
    cout << sum;
    return 0;
}
