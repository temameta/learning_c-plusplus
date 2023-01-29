#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct abonent
{
    string name;
    float balance;
};

int main()
{
    abonent abon;
    abonent *ptr;
    ptr = &abon;
    cin >> ptr->name;
    cin >> ptr->balance;
    printf("%10.2f", ptr->balance*2);
}