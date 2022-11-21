#include <iostream>

using namespace std;

int main()
{
    int trans;
    float rasst;
    cout << "Введите тип транспорта\n 1- автомобиль,\n 2- поезд,\n 3- самолет" << endl;
    cin >> trans;
    cout << "Введите расстояние в км" << endl;
    cin >> rasst;
    switch (trans) {
        case 1: cout << rasst*100 << endl; break;
        case 2: cout << rasst*150 << endl; break;
        case 3: cout << rasst*200 << endl; break;
    }
}
