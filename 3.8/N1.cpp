#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char sym;
    int count = 0;
    getline(cin, s);
    cin >> sym;
    s = " "+s;
    for (long unsigned int i = 0; i<s.length(); i++)
        if (s[i]==' ' && s[i+1]==sym)
            count++;
    cout << count << endl;
    return 0;
}