#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char c;
    cin >> a >> b;
    cin >> c;
    try {
        if (c!='+' && c!='-' && c!='*' && c!='/') throw "Неверная операция";
        else if (c=='/') {
            if (b==0) throw "Невозможно выполнить операцию";
            else cout << a/b;
        }
        else if (c=='*') cout << a*b;
        else if (c=='-') cout << a-b;
        else if (c=='+') cout << a+b;
    }
    catch (const char* exeption) {cout << exeption << c;}
}