#include <iostream>
using namespace std;

int main()
{
    int arr[] {9,8,7,6,5,4,3,2,1,0};
    int sum = 0;
    
    for (int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++)
        if (i % 2 != 0) sum+=arr[i];
        
    cout << sum;
    return 0;
}
