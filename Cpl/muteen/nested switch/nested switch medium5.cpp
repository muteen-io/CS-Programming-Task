#include <iostream>
using namespace std;

int main() {
    char dept;
    int item;

    cout << "Enter department (e for Electronics, c for Clothing): ";
    cin >> dept;

    switch (dept) {
        case 'e':
        case 'E':
            cout << "Electronics Dept. Choose item (1: Smartphone, 2: Laptop): ";
            cin >> item;
            switch (item) {
                case 1:
                    cout << "You selected a Smartphone!" << endl;
                    break;
                case 2:
                    cout << "You selected a Laptop!" << endl;
                    break;
                default:
                    cout << "Invalid electronics item!" << endl;
            }
            break;

        case 'c':
        case 'C':
            cout << "Clothing Dept. Choose item (1: Jacket, 2: T-Shirt): ";
            cin >> item;
            switch (item) {
                case 1:
                    cout << "You selected a Jacket!" << endl;
                    break;
                case 2:
                    cout << "You selected a T-Shirt!" << endl;
                    break;
                default:
                    cout << "Invalid clothing item!" << endl;
            }
            break;

        default:
            cout << "Invalid department choice!" << endl;
    }

    return 0;
}