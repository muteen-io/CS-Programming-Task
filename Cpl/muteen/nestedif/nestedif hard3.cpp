#include <iostream>
using namespace std;

int main() {
    int age;
    char citizen;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Are you a registered citizen? (y/n): ";
        cin >> citizen;

        if (citizen == 'y') {
            cout << "You are eligible to vote!" << endl;
        } else {
            cout << "You must register first." << endl;
        }
    } else {
        cout << "You are too young to vote." << endl;
    }

    return 0;
}