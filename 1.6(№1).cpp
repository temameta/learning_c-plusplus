#include <iostream>

using namespace std;

int main()
{
    int ans;
    cout << "Кто является автором языка C++?\n 1.Джеймс Гослинг\n 2.Бьёрн Страуструп\n 3.Деннис Ритчи\n";
    cin >> ans;
    switch (ans) {
        case 1: cout << "Ошибка" << endl; break;
        case 2: cout << "Верно" << endl; break;
        case 3: cout << "Ошибка" << endl; break;
        default: cout << "Error" << endl; break;
    }
    return 0;
}
