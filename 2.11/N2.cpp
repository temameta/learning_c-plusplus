#include <iostream>
#include <stdio.h>
using namespace std;

struct my_time
{
    int sec = 0, min = 0, hour = 0;
};

void update(my_time *ptr)
{
    if (ptr->hour != 24) {
        if (ptr->min != 60) {
            if (ptr->sec != 60)
                ptr->sec++;
            else {
                ptr->min++;
                ptr->sec = 0;
            }
        }
        else {
            ptr->min = 0;
            ptr->hour++;
        }
    }
    else 
        ptr->hour = 0;
}

void display(my_time *ptr)
{
    if (ptr->hour != 24 && ptr->min != 60 && ptr->sec != 60)
        printf("%02d:%02d:%02d\n", ptr->hour, ptr->min, ptr->sec);
}

int main()
{
    my_time systime;

    for (int i = 0; i <= 100; i++) {
        display(&systime);
        update(&systime);
    }
}