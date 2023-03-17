#include <iostream>
#include <string>
using namespace std;

class Fraction
{
    int chisl, znam;
    int NOD(int a, int b) {
        int nod = 1;
        for (int i = min(b, a); i > 0; i--)
            if (a % i == 0 && b % i == 0) {
                nod = i;
                break;
            }
        return nod;
    }
    int NOK(int a, int b) {return a*b / NOD(a,b);}
    public:
    Fraction(int c, int z) {
        unsigned int nod = NOD(c,z);
        this->chisl = c/nod;
        this->znam = z/nod;
    }
    void print() {
        cout << "Дробь " << chisl << "/" << znam << endl;
        return;
    }
    Fraction operator + (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        return Fraction(this->chisl*(nok/this->znam*this->chisl)+dr2.chisl*(nok/dr2.znam*dr2.chisl), nok);
        }
    Fraction operator - (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        return Fraction(this->chisl*(nok/this->znam*this->chisl)-dr2.chisl*(nok/dr2.znam*dr2.chisl), nok);
        }
    Fraction operator * (Fraction dr2) {return Fraction(this->chisl*dr2.chisl, this->znam*dr2.znam);}
    Fraction operator / (Fraction dr2) {return Fraction(this->chisl*dr2.znam, this->znam*dr2.chisl);}
};
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    Fraction dr1(a,b), dr2(c,d);
    Fraction drplus = dr1 + dr2, drminus = dr1 - dr2, drumn = dr1 * dr2, drdelen = dr1 / dr2;
    drplus.print();
    drminus.print();
    drumn.print();
    drdelen.print();
    return 0;
}