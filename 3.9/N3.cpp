#include <iostream>
#include <string>
using namespace std;

void print(int x)
{
    cout << "int " << x << endl;
}
void print(double x)
{
    cout << "double " << x << endl;
}
void print(string x)
{
    cout << "string " << x << endl;
}

int main()
{
    print(5);
    print(5.2);
    print("five");
}