#include <iostream>
using namespace std;

int main() {
    int units;
    int bill;

    cout << "Enter units used: ";
    cin >> units;

    if (units < 0) {
        cout << "Units cannot be negative." << endl;
        return 0;
    }

    if (units <= 100) {
        bill = units * 5;
    }

    if (units > 100 && units <= 200) {
        bill = 100 * 5 + (units - 100) * 8;
    }

    if (units > 200) {
        bill = 100 * 5 + 100 * 8 + (units - 200) * 12;
    }

    cout << "Your bill is: " << bill<< endl;

    return 0;
}