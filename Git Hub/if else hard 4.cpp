#include <iostream>
using namespace std;

int main() {
    int d, m, y, maxDays = 31;
    cout << "Enter Date, Month, Year: ";
    cin >> d >> m >> y;

    if (m < 1 || m > 12 || d < 1 || y < 1) {
        cout << "Invalid Date";
        return 0;
    }

    if (m == 4 || m == 6 || m == 9 || m == 11) maxDays = 30;
    else if (m == 2) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) maxDays = 29;
        else maxDays = 28;
    }

    if (d <= maxDays) cout << "Valid Date";
    else cout << "Invalid Date";
    return 0;
}
