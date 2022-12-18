#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    FILE *f1, *f2;
    char elem[] = "";
    string s = "s";

    f1 = fopen("f6in.txt", "r");
    f2 = fopen("f6out.txt", "w");

    if(f1 == NULL) {
        cout << "Ошибка открытия исходного файла";
        return 0;
    }

    while (!feof(f1)) {
        fscanf(f1, "%c", &elem);
        cout << elem << endl;
        fprintf(f2, "%c", *elem);
        if (elem == s)
            fprintf(f2, "%s", "\n");
    } 

    fclose(f1);
    fclose(f2);

    return 0;
}