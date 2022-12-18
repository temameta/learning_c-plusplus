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

    if ((f1 = fopen("f2in.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f2in.txt";
        exit(1);
    }

    for (int i = 0; i<10; i++) {
        fprintf(f1, "%d", rand() % 100);
        if (i!=9)
            fprintf(f1, "%s", "\n");
    }

    fclose(f1);
}
void gen_file2()
{
    int a, i = 0;
    int arr[10];

    if ((f1 = fopen("f2in.txt", "r")) == NULL) {
        cout << "Ошибка открытия файла f1in.txt";
        exit(1);
    }

    if ((f2 = fopen("f2out.txt", "w")) == NULL) {
        cout << "Ошибка открытия файла f2out.txt";
        exit(2);
    }

    for (i; fscanf(f1, "%d", &a) == 1; i++)
        arr[i] = a;
    

    for (i--; i>=0; i--) {
        fprintf(f2, "%d", arr[i]);
        if (i!=0)
            fprintf(f2, "%s", "\n");
    }

    fclose(f1);
    fclose(f2);
}