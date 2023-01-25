#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct adress
{
    char index[20];
    char town[20];
    char street[20];
    char house[20];
    char office[20];
};

struct organisation
{
    string inn;
    string name;
    string opf;
    adress ad;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    
    organisation org;

    cin >> org.opf >> org.name >> org.inn;
    cin >> org.ad.index >> org.ad.town >> org.ad.street >> org.ad.house >> org.ad.office;

    cout << "ИНН " << org.inn << endl;
    cout << org.opf << " " << org.name << endl;
    printf("Адрес: %s, город %s, улица %s, дом %s, офис %s", org.ad.index, org.ad.town, org.ad.street, org.ad.house, org.ad.office);

}
