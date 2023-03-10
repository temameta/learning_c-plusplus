#include <iostream>
using namespace std;

class Avto
{
    protected :
        static char brand[128], name[128];
    public:
        Avto(char*, char*);

};
Avto::Avto(char *b, char *n) {
    this->brand[0] = *b;
    this->name[0] = *n;
}
class Car: private Avto
{
    double speed;
    public:
        Car(char*, char*, double);
        void info() {
            // cout << "Марка:" << this->brand << " Модель:" << this->name << " Скорость:" << this->speed << endl;
            cout << "Marka:" << this->brand << " Model:" << this->name << " Speed:" << this->speed << endl;
        }
};
Car::Car(char* b, char* n, double s):Avto(b,n) {
    this->speed = s;
}

int main() {
    setlocale(LC_ALL, "Russian");
    char b[128] , n[128];
    double s;
    cin >> b >> n >> s;
    Car car(b,n,s);
    car.info();
}