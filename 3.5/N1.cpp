#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    string fname, lname;
    double salary;
    public:
    Employee(string f, string l, double s) {
        this->fname = f;
        this->lname = l;
        this->salary = s;
    }
    double get_salary() {return this->salary;}
};
double avarage(double s1, double s2, double s3) {return (s1+s2+s3)/3.0;}
int main() 
{
    string fname,lname;
    double salary;
    cin >> fname >> lname >> salary;
    Employee emp1(fname, lname, salary);
    cin >> fname >> lname >> salary;
    Employee emp2(fname, lname, salary);
    cin >> fname >> lname >> salary;
    Employee emp3(fname, lname, salary);
    cout.precision(2);
    cout << fixed << avarage(emp1.get_salary(),emp2.get_salary(),emp3.get_salary());
    return 0;
}