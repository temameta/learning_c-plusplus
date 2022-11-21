#include <iostream>

using namespace std;

int main()
{
    int n = 2;
    for (int i = 1; i <= 5; i++) {
        cout << n << endl;
        n+=n;
    }
    return 0;
}
