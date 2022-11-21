#include <iostream>
using namespace std;

int main()
{
    int a, b, nod = 0;
    cin >> a >> b;
    while(nod == 0) {
        if(a<b) {
            if(b%a==0) nod = a;
            else b%=a;
        }
        else if(a>b) {
            if(a%b==0) nod = b;
            else a%=b;
            }
    }
    cout << nod << endl;
    return 0;
}
