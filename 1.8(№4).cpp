#include <iostream>
using namespace std;

int main()
{
    int n, delitel = 0;
    cin >> n;
    while(delitel!= n) {
        delitel++;
        if(n%delitel==0) {
            cout << delitel << endl;
        }
    }
    return 0;
}
