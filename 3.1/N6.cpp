#include <iostream>
using namespace std;

int main()
{
    int kolvo, ch = 0, nech = 0;
    int *ptr;
    cin >> kolvo;
    ptr = new int[kolvo];
    for (int i = 0; i < kolvo; i++) {
        cin >> ptr[i];
        if (ptr[i] % 2 == 0) ch++;
        else nech++;
    }
    if (ch > nech) cout << ch;
    else cout << nech;
}