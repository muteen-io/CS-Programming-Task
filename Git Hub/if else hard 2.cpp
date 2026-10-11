#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        cout << "Two real roots: " << (-b + sqrt(d)) / (2 * a) << " and " << (-b - sqrt(d)) / (2 * a);
    } else if (d == 0) {
        cout << "One real root: " << -b / (2 * a);
    } else {
        cout << "Complex roots: " << -b / (2 * a) << " + " << sqrt(-d) / (2 * a) << "i and "
             << -b / (2 * a) << " - " << sqrt(-d) / (2 * a) << "i";
    }
    return 0;
}
