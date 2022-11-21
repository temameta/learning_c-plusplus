#include <iostream>

using namespace std;

int main()
{
    int hero;
    cout << "Выбери героя\n 1. Иван-Царевич\n 2. Илья Муромец\n 3. Добрыня Никитич\n 4. Алёша Попович" << endl;
    cin >> hero;
    switch (hero) {
        case 1: cout << "Кощей Бессмертный" << endl; break;
        case 2: cout << "Соловей-разбойник" << endl; break;
        case 3: cout << "Змей Горыныч" << endl; break;
        case 4: cout << "Тугарин Змей" << endl; break;
    }
    return 0;
}
