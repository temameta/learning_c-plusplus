#include <iostream>
using namespace std;

class Tovar
{
    double price, total_price;
    public:
    Tovar(double p) {this->price = p;}
    void count_total_price(int kolvo) {this->total_price = this->price*kolvo;}
    double get_total_price() {return this->total_price;}
};

int main()
{
    double price;
    int kolvo;
    cin >> price >> kolvo;
    Tovar tovar(price);
    tovar.count_total_price(kolvo);
    cout << "Total price:";
    cout << tovar.get_total_price() << endl;
}