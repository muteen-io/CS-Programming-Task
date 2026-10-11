#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;
    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    double avg = (m1 + m2 + m3) / 3.0;

    if (m1 < 40 || m2 < 40 || m3 < 40) {
        cout << "FAIL" << endl;
        return 0;
    } else {
        cout << "PASS" << endl;
    }

    if (avg >= 80) {
        cout << "Grade A" << endl;
    }
    if (avg >= 60 && avg < 80) {
        cout << "Grade B" << endl;
    }
    if (avg < 60) {
        cout << "Grade C" << endl;
    }

    return 0;
}