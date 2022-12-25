#include <iostream>
#include <malloc.h>
using namespace std;

int main() 
{
    int kolvo, sum = 0;
    int *p;

    cin >> kolvo;

    p = (int*)malloc(kolvo * sizeof(int));

    for (int i = 0; i<kolvo; i++) {
        cin >> p[i];
        sum += p[i];
    }

    cout << sum;

    free(p);
    return 0;
}