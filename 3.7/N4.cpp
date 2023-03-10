#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    int kol = 0;
    getline(cin, s1);
    while (s1.find(" ") != -1) {
        kol++;
        s1.erase(s1.find(" "),1);
    }
    cout << kol+1 << endl;
}