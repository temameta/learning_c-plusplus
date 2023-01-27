#include <iostream>
#include <string>

using namespace std;

struct student
{
    string sname;
    string name;
    int clas;
};

int main()
{
    student stud[5];
    for (int i = 0; i < 5; i++) {
        cin >> stud[i].name;
        cin >> stud[i].sname;
        cin >> stud[i].clas;
    }
    int clas;
    cin >> clas;
    for (int i = 0; i < 5; i++)
        if (stud[i].clas == clas)
            cout << stud[i].sname << endl;
}