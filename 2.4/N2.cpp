#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    FILE *f;
    int a = 0, y;

    if ((f = fopen("f2.txt", "r")) == NULL) {
        cout << "Ошибка открытия файла";
        cout << f;
        return 0;
    }

    while (!feof(f)) {
        fscanf(f, "%d", &y);
        a+=y;
    }

    fclose(f);

    cout << a;

    return 0;
}