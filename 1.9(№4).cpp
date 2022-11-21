#include <iostream>

using namespace std;

int main()
{
    int kolvo, n, count = 0, sum = 0;
    cin >> kolvo;
    for (int i = 1; i <= kolvo; i++) {
        cin >> n;
        if (n % 10 == 4) {
            count++;
            sum += n;
        }
    }
    cout << count << "\n" << sum;
    return 0;
}
