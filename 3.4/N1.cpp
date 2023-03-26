#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
    int x,y,R;
    public:
    void set_center(int vx, int vy) {
        this->x = vx;
        this->y = vy;
        return;
    }
    void set_radius(int vR) {
        this->R = vR;
        return;
    }
    double get_distance() {return sqrt((this->x)*(this->x)+(this->y)*(this->y));}
    double get_area() {return 3.14*this->R*this->R;}
};

int main()
{
    int x,y,R;
    Circle circle;
    cin >> x >> y >> R;
    circle.set_center(x, y);
    circle.set_radius(R);
    cout.precision(2);
    cout << fixed << circle.get_distance() << endl;
    cout << fixed << circle.get_area() << endl;
    return 0;
}