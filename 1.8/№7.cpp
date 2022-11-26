#include <iostream>
using namespace std;

int main()
{
    int num, popytka_count = 0;
    do {
        popytka_count++;
        
        cout << "Сколько будет 2+ 2?" << endl;
        cin >> num;
        
        if (num == 4) break;
        
        cout << "Нет! Попробуй еще раз!" << endl;
    } while (num != 4);
    cout << "Правильно!" << "\n" << popytka_count << endl;
    return 0;
}
