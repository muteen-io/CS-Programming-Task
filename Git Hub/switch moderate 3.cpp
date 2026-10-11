#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade letter (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A': case 'a':
            cout << "Excellent Performance!"; break;
        case 'B': case 'b':
            cout << "Good Job! Keep it up."; break;
        case 'C': case 'c':
            cout << "Satisfactory. Room for improvement."; break;
        case 'D': case 'd':
            cout << "Passable. You need to study harder."; break;
        case 'F': case 'f':
            cout << "Failed. Please speak to your teacher."; break;
        default:
            cout << "Error: Unrecognized grade letter.";
    }
    return 0;
}
