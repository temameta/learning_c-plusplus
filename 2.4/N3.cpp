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

    if ((f1 = fopen("f3in.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f3in.txt";
        exit(1);
    }

    for (int i = 0; i<10; i++) {
        fprintf(f1, "%d", rand() % 1000);
        fprintf(f1, "%s", "\n");
    }

    fclose(f1);
}
void gen_file2()
{
    int a, i = 0;
    float sum = 0.0;

    if ((f1 = fopen("f3in.txt", "r")) == NULL) {
        cout << "Ошибка открытия файла f3in.txt";
        exit(1);
    }

    if ((f2 = fopen("f3out.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f3out.txt";
        exit(2);
    }

    for (i; fscanf(f1, "%d", &a) == 1; i++)
        sum += a;

    fprintf(f2, "%f", (sum/i));

    fclose(f1);
    fclose(f2);
}