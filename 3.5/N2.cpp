#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    int width, height;
    public:
    Rectangle(int w, int h) {
        this->width = w;
        this->height = h; 
    }
    int area() {return this->height*this->width;}
};

int main()
{
    int height, width;
    cin >> width >> height;
    Rectangle rect1(width, height);
    cin >> width >> height;
    Rectangle rect2(width, height);
    if (rect1.area() > rect2.area()) cout << rect1.area();
    else cout << rect2.area();
    return 0;
}