#include <iostream>
using namespace std;

class Course
{
    double course;
    public:
    Course(double c) {this->course = c*1.1;}
    double count_money(double amount) {return amount/this->course;}
};

int main()
{
    double course, amount;
    cin >> course >> amount;
    Course money(course);
    cout << "Result:" << money.count_money(amount);
}