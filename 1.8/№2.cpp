#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, count = 0;
    while (sum < 100)
    {
        cin >> num;
        sum+=num;
        count++;
    }
    cout << count << "\n" << sum;
    return 0;
}
