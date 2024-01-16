#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string password;
    string uinput;

    cout << "Welcome to my app! Please create a username\n";
    cin >> uinput;
    username = uinput;

    cout << "Great! your username is: " << username << endl;

    cout << "Please create a password!\n";
    cin >> uinput;
    password = uinput;

    cout << "Please re-enter your password to confirm again.\n";
    cin >> uinput;


    if (uinput != password) {
        cout << "Error! Password does not match the previous password!\n";

   } else {

        cout << "Password successfully confirmed!\n";

        }
    }
