#include <iostream>
#include <exception>
using namespace std;

int division(int a, int b)
{
    if (b==0) throw exception();
    return a/b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    try {
        cout << division(a,b);
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }
}