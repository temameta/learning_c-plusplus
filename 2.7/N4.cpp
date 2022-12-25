#include <iostream>
#include <malloc.h>
using namespace std;

int main() 
{
    int kolvo, max, temp;
    int *p;

    cin >> kolvo;

    p = (int*)malloc(kolvo * sizeof(int));

    for (int i = 0; i<kolvo; i++)
        cin >> p[i];
    
    for (int i = 0; i < kolvo - 1; i++) {
        max = i;
        for (int j = i+1; j < kolvo; j++) {
            if (p[i] > p[max])
                max = j;
        }
        temp = p[i];
        p[i] = p[max];
        p[max] = temp;
    }

    for (int i = 0; i < kolvo; i++)
        cout << p[i] << " ";

    free(p);
    return 0;
}