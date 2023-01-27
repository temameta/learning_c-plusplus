#include <iostream>
#include <stdio.h>

using namespace std;

struct coord
{
    float x;
    float y;
    char color;
};

int main()
{
    coord tochka[5];
    int kolvo = 0;
    for (int i = 0; i < 5; i++) {
        cin >> tochka[i].x;
        cin >> tochka[i].y;
        scanf("%s", &tochka[i].color);
        
        if (tochka[i].x < 10 && tochka[i].color == 'r')
            kolvo++;
    }
    cout << kolvo;
}