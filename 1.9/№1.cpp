#include <iostream>

using namespace std;

int main ()
{
    int kolvo = 0, chislo = 0, max = 0, min = 0;
    cin >> kolvo;
    for (int i = 1; i <= kolvo; i++) {
        cin >> chislo;
        if (i == 1) min = chislo;
        if (chislo > max) max = chislo;
        if (chislo < min) min = chislo;
    }
    cout << max << "\n" << min << endl;
    return 0;
}
