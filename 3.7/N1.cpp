#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    char sym;
    int counter = 0;
    getline(cin, s);
    cin >> sym;
    for (int i = 0; i<s.length(); i++){
        if (s[i]==sym){
            counter++;
            s.erase(i,1);
        }
    }
    cout << counter << endl;
}