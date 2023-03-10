#include <iostream>
using namespace std;

class Area;
class Rectangle
{
    double width, height;
    public:
        Rectangle(double, double);
        friend Area;
};
Rectangle::Rectangle(double w, double h) {
    this->width = w;
    this->height = h;
}

class Area
{
    public:
        double getValue(Rectangle &rect) {
            return rect.height * rect.width;
        }
};

int main()
{
    double h,w;
    cin >> h >> w;
    Rectangle rect(h,w);
    Area area;
    cout << area.getValue(rect);
}