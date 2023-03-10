#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    cout << add(1,2) << endl;
    cout << add(1,2,3);
}