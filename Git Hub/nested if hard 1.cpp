#include <iostream>
using namespace std;

int main() {
    char degree;
    int exp;
    cout << "Enter degree (B/M) and years of experience: ";
    cin >> degree >> exp;

    if (degree == 'M' || degree == 'm') {
        if (exp >= 2) {
            cout << "Candidate Shortlisted for Interview.";
        } else {
            cout << "Rejected: Master's holder requires at least 2 years of experience.";
        }
    } else if (degree == 'B' || degree == 'b') {
        if (exp >= 5) {
            cout << "Candidate Shortlisted for Written Test.";
        } else {
            cout << "Rejected: Bachelor's holder requires at least 5 years of experience.";
        }
    } else {
        cout << "Rejected: Invalid degree type.";
    }
    return 0;
}
