#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
    int age;
    protected:
    string name;
    public:
    Person(string n, int a) {
        this->name = n;
        this->age = a;
    }
    void display() {
        cout << "Имя: " << this->name << " Возраст: " << this->age << endl;
        return;
    }
};
class Employee: private Person
{
    private:
    string company;
    public:
    Employee(string n, int a, string c):Person(n,a) {
        this->company = c;
    }
    void showEmployeeName() {
        cout << "Имя: " << this->name << " Компания: " << this->company << endl;
        return;
    }
};
int main()
{
    string name, company;
    int age;
    cin >> name >> age;
    Person person(name, age);
    person.display();
    cin >> name >> age >> company;
    Employee emp(name, age, company);
    emp.showEmployeeName();
}