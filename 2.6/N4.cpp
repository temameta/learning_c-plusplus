#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int str, sto;
    int **a;

    cin >> str >> sto;

    a = (int**)malloc(str * sizeof(int));

    for (int i = 0; i < str; i++) {
        a[i] = (int*)malloc(sto * sizeof(int));
        for (int j = 0; j < sto; j++) 
            cin >> a[i][j];
    }

    for (int i = 0; i < str; i++) {
        for (int j = 0; j < sto; j++)  
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < str; i++)
        free(a[i]);
    free(a);

    return 0;
}