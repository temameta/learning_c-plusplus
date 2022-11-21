#include <iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout << "Сколько будет 2+ 2?" << endl;
        cin >> num;
        if (num == 4) break;
        cout << "Нет! Попробуй еще раз!" << endl;
    } while (num != 4);
    cout << "Правильно!" << endl;
    return 0;
}
