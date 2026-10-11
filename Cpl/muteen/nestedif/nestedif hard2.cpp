#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, password;
    
    cout << "Enter username: ";
    cin >>name;

    if (name == "admin") {
        cout << "Enter password: ";
        cin >> password;
        
        if (password == "1234") {
            cout << "Login Successful!" << endl;
        } else {
            cout << "Wrong Password!" << endl;
        }
    } else {
        cout << "User not found!" << endl;
    }

    return 0;
}