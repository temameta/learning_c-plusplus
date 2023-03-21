#include <iostream>
#include <string>
using namespace std;

struct MinLengthPasswordError {
};
struct NoSpecialCharactersError{
};
void check_password(string password)
{
    string symbols = "!@#$%^&*()<>?,.";
    bool leg = false;
    if (password.length()<6) throw MinLengthPasswordError();
    for (int i = 0; i<password.length(); i++)
        for (int j = 0; j<symbols.length(); j++)
            if (password[i]==symbols[j]) {
                leg = true;
                break;
            }
    if (leg==false) throw NoSpecialCharactersError();
    return;
}
int main()
{
    string password;
    cin >> password;
    try {
        check_password(password);
        cout << "Пароль: " << password << endl;
    }
    catch (const MinLengthPasswordError& ex) {
        cout << "Короткий пароль" << endl;
    }
    catch (const NoSpecialCharactersError& ex) {
        cout << "Нет специального символа" << endl;
    } 
}