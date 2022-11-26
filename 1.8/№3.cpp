#include <iostream>
using namespace std;

int main()
{
    int count = 0, pred = 1, predpred = 1, sled;
    
    cout << pred << "\n" << predpred << endl;
    
    while(count!=10) {
        sled = pred + predpred;
        predpred = pred;
        pred = sled;
        cout << sled << endl;
        count++;
    }
    
    return 0;
}
