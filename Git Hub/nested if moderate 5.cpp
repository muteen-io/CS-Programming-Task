#include <iostream>
using namespace std;

int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;

    if (username == "admin") {
        cout << "Enter password: ";
        cin >> password;
        
        if (password == "1234") {
            cout << "Login Successful! Welcome.";
        } else {
            cout << "Access Denied: Incorrect password.";
        }
    } else {
        cout << "Access Denied: Username not found.";
    }
    return 0;
}
