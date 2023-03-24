#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, s1;
    cin >> s;
    for (int i = s.length()-1; i>=0; i--) s1+=s[i];
    cout << s1;
}