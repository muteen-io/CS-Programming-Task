#include <iostream>
using namespace std;

int main() {
    char sizeCode;
    cout << "Enter size (s for Small, m for Medium, l for Large): ";
    cin >> sizeCode;

    switch (sizeCode) {
        case 's':
        case 'S':
            cout << "Small size selected." << endl;
            break;
        case 'm':
        case 'M':
            cout << "Medium size selected." << endl;
            break;
        case 'l':
        case 'L':
            cout << "Large size selected." << endl;
            break;
        default:
            cout << "Invalid size code!" << endl;
    }

    return 0;
}