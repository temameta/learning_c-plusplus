#include <iostream>
#include <string>

using namespace std;

struct book
{
    string name;
    string author;
    int cost;
    int year;
};

int main()
{
    book buk[5];
    int kolvo = 0, sum = 0, y;
    for (int i = 0; i < 5; i++) {
        cin >> buk[i].name;
        cin >> buk[i].author;
        cin >> buk[i].cost;
        cin >> buk[i].year;
    }
    cin >> y;
    for (int i = 0; i < 5; i++)
        if (buk[i].year > y) {
            kolvo++;
            sum+=buk[i].cost;
        }
    cout << kolvo << endl << sum;
}