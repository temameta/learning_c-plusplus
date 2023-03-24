#include <iostream>
#include <string>
using namespace std;

class Fraction
{
    private:
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
    Fraction(int ch, int zn) {
        unsigned int nod = NOD(ch,zn);
        this->chisl = ch/nod;
        this->znam = zn/nod;
    }
    void print() {
        cout << "Дробь " << chisl << "/" << znam;
        return;
    }
    bool operator == (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        if (this->chisl*(nok/this->znam*this->chisl) == dr2.chisl*(nok/dr2.znam*dr2.chisl)) return true;
        return false;
    }
    bool operator != (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        if (this->chisl*(nok/this->znam*this->chisl) != dr2.chisl*(nok/dr2.znam*dr2.chisl)) return true;
        return false;
    }
    bool operator > (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        if (this->chisl*(nok/this->znam*this->chisl) > dr2.chisl*(nok/dr2.znam*dr2.chisl)) return true;
        return false;
    }
    bool operator < (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        if (this->chisl*(nok/this->znam*this->chisl) < dr2.chisl*(nok/dr2.znam*dr2.chisl)) return true;
        return false;
    }
    bool operator <= (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        if (this->chisl*(nok/this->znam*this->chisl) <= dr2.chisl*(nok/dr2.znam*dr2.chisl)) return true;
        return false;
    }
    bool operator >= (Fraction dr2) {
        unsigned int nok = NOK(this->znam, dr2.znam);
        if (this->chisl*(nok/this->znam*this->chisl) >= dr2.chisl*(nok/dr2.znam*dr2.chisl)) return true;
        return false;
    }
};
int main()
{
    int ch1, ch2, zn1, zn2;
    cin >> ch1 >> zn1 >> ch2 >> zn2;
    Fraction a(ch1,zn1), b(ch2,zn2);
    if (a==b) cout << 1 << endl;
    else cout << 0 << endl;
    if (a!=b) cout << 1 << endl;
    else cout << 0 << endl;
    if (a>b) cout << 1 << endl;
    else cout << 0 << endl;
    if (a<b) cout << 1 << endl;
    else cout << 0 << endl;
    if (a>=b) cout << 1 << endl;
    else cout << 0 << endl;
    if (a<=b) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}