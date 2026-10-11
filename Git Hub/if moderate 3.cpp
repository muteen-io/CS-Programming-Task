#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;
    cout << "Enter total units consumed: ";
    cin >> units;
    if (units <= 100) {
        bill = units * 5;
    } else {
        bill = (100 * 5) + ((units - 100) * 10);
    }

    cout << "Total Electricity Bill: Rs. " << bill << endl;
    return 0;
}
