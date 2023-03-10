#include <iostream>
#include <cmath>
using namespace std;

class Tochka
{
    int x,y;
    public:
        Tochka(int, int);
        Tochka();
        double rasst() {return sqrt(abs(x*x + y*y));};
        ~Tochka() {};
};
Tochka::Tochka(int x, int y)
{
    this->x = x;
    this->y = y;
};
Tochka::Tochka()
{
    this->x = 0;
    this->y = 0;
};
int main()
{
    int x,y;
    cin >> x >> y;

    Tochka t(x,y);
    cout.precision(2);
    cout << fixed << t.rasst() << endl;

    Tochka tnol;
    cout.precision(2);
    cout << fixed << tnol.rasst() << endl; 

    return 0;
}