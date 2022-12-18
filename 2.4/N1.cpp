#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    FILE *f1;
    int x;

    if ((f1 = fopen("f1.txt", "r")) == NULL) {
        cout << "Файл не удалось открыть";
        return 0;
    }
    fscanf(f1, "%d", &x);
    fclose(f1);
    cout << x*x;
    return 0;
}