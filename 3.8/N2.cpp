#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i1 = 0, i2 = 0, min = 1000;
    for (int i = 0; i<s.length(); i++) {
        if (s[i]==' ') {
            i1 = i;
            i2 -= i1;
            if (min > i2) min = i2;
        }
    }
    cout << min;
}