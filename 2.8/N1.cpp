#include <iostream>
using namespace std;

struct date
{
    int day;
    char month[20];
    int year;
};

int main()
{
    date d;

    cin >> d.day;
    cin >> d.month;
    cin >> d.year;

    cout << "День рождения: " << d.day << endl;
    cout << "Месяц рождения: " << d.month << endl;
    cout << "Год рождения: " << d.year << endl;
}