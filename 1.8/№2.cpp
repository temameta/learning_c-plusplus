#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, sum_chet = 0;
    
    do {
        cin >> n;
        if (n%2==0)
            sum_chet+=n;
        sum+=n;
    } while(sum_chet<50);
    
    cout << sum << "\n" << sum_chet;
    return 0;
}
