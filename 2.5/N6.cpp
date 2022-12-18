#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a[26] = {};
    char *ptr;

    ptr = a;
    
    for (int i = 0; i<26; i++) {
        *ptr = i+'A';
        ptr++;
    }

    ptr = a;

    for (int i = 0; i<26; i++) {
        printf("%c ", *ptr);
        ptr++;
    }
}