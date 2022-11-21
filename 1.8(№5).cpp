#include <iostream>
using namespace std;

int main()
{
    int num, krat5_count = 0;
    do
    {
        cin >> num;
        if (num!=0 && num%3==0 && num%10==5)
        {
            krat5_count++;
        }
    } while (num != 0);
    cout << krat5_count;
    return 0;
}
