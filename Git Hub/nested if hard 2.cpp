#include <iostream>
using namespace std;

int main() {
    double gpa;
    int attendance;
    cout << "Enter GPA and Attendance %: ";
    cin >> gpa >> attendance;

    if (gpa >= 3.5) {
        if (gpa >= 3.8) {
            if (attendance >= 90) cout << "Eligible for Full Scholarship!";
            else cout << "Eligible for Partial Scholarship due to attendance.";
        } else {
            if (attendance >= 95) cout << "Eligible for Partial Scholarship!";
            else cout << "Not Eligible: Need higher attendance for this GPA bracket.";
        }
    } else {
        cout << "Not Eligible: GPA below 3.5.";
    }
    return 0;
}
