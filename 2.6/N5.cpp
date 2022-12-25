#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int str, *sto;
    int **a;

    cin >> str;

    a = (int**)malloc(str * sizeof(int*));
    sto = (int*)malloc(str * sizeof(int));

    for (int i = 0; i < str; i++) {
        cin >> sto[i];
        a[i] = (int*)malloc(sto[i] * sizeof(int));
        for (int j = 0; j < sto[i]; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < sto[i]; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < str; i++)
        free(a[i]);
    free(a);
    free(sto);

    return 0;
}