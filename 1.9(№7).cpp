#include <iostream>

using namespace std;

int main ()
{
    int kolvo = 0, vozrast = 0, max = 0, min = 0;
    float sum = 0.0;
    cin >> kolvo;
    for (int i = 1; i <= kolvo; i++) {
        cin >> vozrast;
        if (i == 1) min = vozrast;
        if (vozrast > max) max = vozrast;
        if (vozrast < min) min = vozrast;
        sum += vozrast;
    }
    cout << max << "\n" << min << "\n" << sum / kolvo << endl;
    return 0;
}
