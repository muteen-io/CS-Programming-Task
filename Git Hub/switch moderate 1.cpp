#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    cout << "--- Menu ---\n1. Burger ($5)\n2. Pizza ($12)\n3. Fries ($3)\nEnter choice (1-3): ";
    cin >> choice;
    cout << "Enter quantity: ";
    cin >> qty;

    switch (choice) {
        case 1: cout << "Total Bill: $" << qty * 5; break;
        case 2: cout << "Total Bill: $" << qty * 12; break;
        case 3: cout << "Total Bill: $" << qty * 3; break;
        default: cout << "Invalid selection!";
    }
    return 0;
}
