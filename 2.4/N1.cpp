#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

FILE *f1, *f2;

void gen_file1();
void gen_file2();

int main()
{   
    gen_file1();
    gen_file2();

    return 0;
}

void gen_file1()
{
    srand(time(NULL));

    if ((f1 = fopen("f1in.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f1in.txt";
        exit(1);
    }

    for (int i = 0; i<10; i++) {
        fprintf(f1, "%d", rand() % 100);
        fprintf(f1, "%s", "\n");
    }

    fclose(f1);
}
void gen_file2()
{
    int a;

    if ((f1 = fopen("f1in.txt", "r")) == NULL) {
        cout << "Ошибка открытия файла f1in.txt";
        exit(1);
    }

    if ((f2 = fopen("f1out.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f1out.txt";
        exit(2);
    }

    while (fscanf(f1, "%d", &a) == 1) {
        fprintf(f2, "%d", a*2);
        fprintf(f2, "%s", "\n");
    }

    fclose(f1);
    fclose(f2);
}