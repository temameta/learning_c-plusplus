#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    private:
    double width, height;
    public:
    Rectangle(double w, double h) {
        this->width = w;
        this->height = h;
    }
    friend double area(Rectangle &rect);
};

double area(Rectangle &rect)
{
    return rect.width*rect.height;
}

int main()
{
    double w,h;
    cin >> w >> h;
    Rectangle rect(w,h);
    cout << area(rect) << endl;
}