#include <iostream>
using namespace std;

int main()
{
    int num, chet_count = 0;
    do
    {
        cin >> num;
        if (num!=0 && num%2==0)
        {
            chet_count++;
        }
    } while (num != 0);
    cout << chet_count;
    return 0;
}
