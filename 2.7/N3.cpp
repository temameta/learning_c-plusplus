#include <iostream>
#include <malloc.h>
using namespace std;

int main() 
{
    int kolvo, max, min;
    int *p;

    cin >> kolvo;

    p = (int*)malloc(kolvo * sizeof(int));

    

    for (int i = 0; i<kolvo; i++)
        cin >> p[i];
    
    min = p[0];
    max = p[0];

    for ( int i = 0; i< kolvo; i++) {
        if (p[i] > max)
            max = p[i];
        if (p[i] < min)
            min = p[i];
    }

    cout << max << endl << min;

    free(p);
    return 0;
}