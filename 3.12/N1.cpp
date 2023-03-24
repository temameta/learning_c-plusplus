#include <iostream>
#include <string>
using namespace std;
struct WrongCharacterError {};
struct FirstCharacterError {};
bool check_username(string username) 
{
    bool valid_symbols;
    string allowable_symbols = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i<username.length(); i++) {
        valid_symbols = false;
        for (int j = 0; j<allowable_symbols.length(); j++) 
            if (username[i] == allowable_symbols[j]) valid_symbols = true;
        if (valid_symbols==false) { 
            throw WrongCharacterError();
            break;
        }
    }
    for (int i = 0; i<10; i++)
        if (username[0] == allowable_symbols[i]) throw FirstCharacterError();
    return true;
}
int main()
{
    string username;
    cin >> username;
    try {if (check_username(username)) cout << "OK" << endl;}
    catch (WrongCharacterError&) {cout << "username может содержать только буквы и цифры" << endl;}
    catch (FirstCharacterError&) {cout << "username не может начинаться с цифры" << endl;}
}