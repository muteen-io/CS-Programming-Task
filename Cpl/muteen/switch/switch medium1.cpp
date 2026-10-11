#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your letter grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            cout << "Remark: Excellent job!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Remark: Good work!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Remark: Fair, you passed." << endl;
            break;
        case 'D':
        case 'd':
            cout << "Remark: Needs improvement." << endl;
            break;
        case 'F':
        case 'f':
            cout << "Remark: Failed. Try again." << endl;
            break;
        default:
            cout << "Error: Invalid grade entered!" << endl;
    }

    return 0;
}