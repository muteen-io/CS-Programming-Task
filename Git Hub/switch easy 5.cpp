#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    switch (num % 2) {
        case 0: cout << "Even Number"; break;
        default: cout << "Odd Number"; 
    }
    return 0;
}
