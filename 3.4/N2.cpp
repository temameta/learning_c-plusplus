#include <iostream>
using namespace std;

class Nalog
{
    static double n;
    public:
    static void setN(double vn) {Nalog::n = vn;}
    static double getN(double sum) {return Nalog::n*sum;}
};
double Nalog::n = 0;
int main()
{
    double n, sum;
    cin >> n >> sum;
    Nalog nal;
    Nalog::setN(n);
    cout.precision(2);
    cout << fixed << Nalog::getN(sum) << endl;
    return 0;
}