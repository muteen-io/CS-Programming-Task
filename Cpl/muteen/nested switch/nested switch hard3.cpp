#include <iostream>
using namespace std;

int main() {
    char device;
    int issue;
    cout << "Enter device (p/l) and issue code (1/2): ";
    cin >> device >> issue;

    switch (device) {
        case 'p': case 'P':
            switch (issue) {
                case 1: cout << "Phone Issue: Cracked Screen" << endl; break;
                case 2: cout << "Phone Issue: Dead Battery" << endl; break;
                default: cout << "Unknown phone issue." << endl;
            }
            break;
        case 'l': case 'L':
            switch (issue) {
                case 1: cout << "Laptop Issue: Overheating" << endl; break;
                case 2: cout << "Laptop Issue: Broken Keyboard" << endl; break;
                default: cout << "Unknown laptop issue." << endl;
            }
            break;
        default: cout << "Invalid device!" << endl;
    }
    return 0;
}