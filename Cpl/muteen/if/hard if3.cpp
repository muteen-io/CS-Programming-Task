#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "These sides cannot make a triangle." << endl;
        return 0;
    }

    if (a == b && b == c) {
        cout << "Equilateral triangle" << endl;
    }

    if ((a == b && b != c) || (a == c && c != b) || (b == c && a != b)) {
        cout << "Isosceles triangle" << endl;
    }

    if (a != b && b != c && a != c) {
        cout << "Scalene triangle" << endl;
    }

    

    return 0;
}