#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s[0] << "-" << s[s.length()-1];
}