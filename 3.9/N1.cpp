#include <iostream>
#include <string>
using namespace std;

string show_message(string s1)
{
    return s1;
}
string show_message(string s1, string s2)
{
    return s1+" "+s2;
}
string show_message(string s1, string s2, string s3)
{
    return s1+" "+s2+" "+s3;
}
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << show_message(s1) << endl;
    cout << show_message(s1,s2) << endl;
    cout << show_message(s1,s2,s3) << endl;
}