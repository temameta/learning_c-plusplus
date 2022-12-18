#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    FILE *f1, *f2, *f3;
    int a;

    f1 = fopen("f5in.txt", "r");
    f2 = fopen("f5chet.txt", "w");
    f3 = fopen("f5nechet.txt", "w");

    if (f1 == NULL) {
        cout << "Ошибка открытия файла f5in";
        return 0;
    }

    while(!feof(f1)) {
        fscanf(f1, "%d", &a);
        if (a % 2 == 0) {
            fprintf(f2, "%d", a);
            fprintf(f2, "%s", "\n");
        }
        else {
            fprintf(f3, "%d", a);
            fprintf(f3, "%s", "\n");
        }

    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}