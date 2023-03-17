#include <iostream>
using namespace std;

int NOD(int a, int b) {
        int nod = 1;
        for (int i = min(b, a); i > 0; i--)
            if (a % i == 0 && b % i == 0) {
                nod = i;
                break;
            }
        return nod;
}

int main()
{
    int x,y;
    cin >> x >> y;
    if (x==y) {
        cout << x;
        return 0;
    }
    else if (x<y) {
        x += y;
        y = x - y;
        x -= y;
    }
    else if (y<x) {
        y += x;
        x = y - x;
        y -= x;
    }
    try {
        if (x==0 || y==0) throw "ZERO!";
        else if (x<0) throw "Negative parameter 1.";
        else if (y<0) throw "Negative parameter 2.";
        cout << NOD(x,y);
    }
    catch (const char* exeption) {
        if (exeption == "ZERO! ") cout << exeption << "x=" << x << "y=" << y << endl;
        else if (exeption == "Negative parameter 1. ") cout << exeption << "x=" << x << "y=" << y << endl;
        else if (exeption == "Negative parameter 2.") cout << exeption << "x=" << x << "y=" << y << endl;
    }
}