#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;

int main() 
{
    int kolvo;
    int *p;
    float sr = 0.0, sum = 0.0;

    cin >> kolvo;

    p = (int*)malloc(kolvo * sizeof(int));

    for (int i = 0; i<kolvo; i++) {
        cin >> p[i];
        sum += p[i];
    }

    sr = sum / kolvo;

    printf("%8.2f", sr);

    free(p);
    return 0;
}