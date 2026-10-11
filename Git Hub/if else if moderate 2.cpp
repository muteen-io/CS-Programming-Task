#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    cout << "Enter three angles: ";
    cin >> a1 >> a2 >> a3;

    if (a1 + a2 + a3 != 180 || a1 <= 0 || a2 <= 0 || a3 <= 0) {
        cout << "Not a valid triangle.";
    } else if (a1 == 90 || a2 == 90 || a3 == 90) {
        cout << "Right-angled Triangle";
    } else if (a1 > 90 || a2 > 90 || a3 > 90) {
        cout << "Obtuse-angled Triangle";
    } else {
        cout << "Acute-angled Triangle";
    }

    return 0;
}
