#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Press 1 for Hello, Press 2 for Goodbye: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello!" << endl;
            break;
        case 2:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Wrong choice!" << endl;
    }

    return 0;
}