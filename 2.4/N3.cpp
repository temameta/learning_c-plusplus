#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    FILE *f1, *f2;
    int a = 0, y, count = 0, arr[10] {};

    if ((f1 = fopen("f3in.txt", "r")) == NULL) {
        cout << "Ошибка открытия файла f3in";
        return 0;
    }

    while(!feof(f1)) {
        fscanf(f1, "%d", &y);
        arr[count] = y*2;
        count++;
    }
    fclose(f1);

    if ((f2 = fopen("f3out.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f3out";
        return 0;
    }

    for (count--; count >= 0; count--)
        fprintf(f2, "%d", arr[count]);
    
    fclose(f2);

    return 0;
}