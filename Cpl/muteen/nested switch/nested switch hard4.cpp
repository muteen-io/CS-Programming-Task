#include <iostream>
using namespace std;

int main() {
    char mode;
    int zone;
    cout << "Enter mode (t/b) and zone (1/2): ";
    cin >> mode >> zone;

    switch (mode) {
        case 't': case 'T':
            switch (zone) {
                case 1: cout << "Train Zone 1 Fare: $10" << endl; break;
                case 2: cout << "Train Zone 2 Fare: $25" << endl; break;
                default: cout << "Invalid train zone!" << endl;
            }
            break;
        case 'b': case 'B':
            cout << "Bus Fare: Flat rate $5" << endl;
            break;
        default: cout << "Invalid transit mode!" << endl;
    }
    return 0;
}