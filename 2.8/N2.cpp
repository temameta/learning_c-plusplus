#include <iostream>
#include <string.h>
using namespace std;

struct contact
{
    string name;
    string second_name;
    string number;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    
    contact c;

    cin >> c.name >> c.second_name >> c.number;

    cout << "Имя: " << c.name << endl;
    cout << "Фамилия: " << c.second_name << endl;
    cout << "Телефон: " << c.number << endl;
}