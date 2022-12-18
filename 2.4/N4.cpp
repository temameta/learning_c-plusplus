#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    FILE *f;
    int count = 0;
    char elem[] = "s";
    string s = "s";

    if ((f = fopen("f4.txt", "r")) == NULL) {
        cout << "Ошибка открытия файла f4";
        return 0;
    }

    while (fscanf(f, "%char", &elem) == 1) {
        if (elem == s) 
            count++;
    }
    fclose(f);

    cout << count;

    return 0;
}