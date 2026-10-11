#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        if (n > 100) {
            cout << "Large Positive number" << endl;
        } else {
            cout << "Small Positive number" << endl;
        }
    } else if (n < 0) {
        if (n < -100) {
            cout << "Large Negative number" << endl;
        } else {
            cout << "Small Negative number" << endl;
        }
    } else {
        cout << "The number is Zero" << endl;
    }

    return 0;
}