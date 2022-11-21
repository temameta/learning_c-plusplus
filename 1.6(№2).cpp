#include <iostream>

using namespace std;

int main()
{
    int smena, urok;
    cout << "Какая смена (1 или 2)?" << endl;
    cin >> smena;
    cout << "Номер урока (1-6)?" << endl;
    cin >> urok;
    switch (smena) {
        case 1:
            switch (urok) {
                case 1: cout << "8:00" << endl; break;
                case 2: cout << "8:50" << endl; break;
                case 3: cout << "9:50" << endl; break;
                case 4: cout << "10:50" << endl; break;
                case 5: cout << "11:50" << endl; break;
                case 6: cout << "12:40" << endl; break;
            }
            break;
        case 2:
            switch (urok) {
                case 1: cout << "14:00" << endl; break;
                case 2: cout << "15:50" << endl; break;
                case 3: cout << "16:50" << endl; break;
                case 4: cout << "17:50" << endl; break;
                case 5: cout << "18:50" << endl; break;
                case 6: cout << "19:40" << endl; break;
            }
        
    }
    return 0;
}
