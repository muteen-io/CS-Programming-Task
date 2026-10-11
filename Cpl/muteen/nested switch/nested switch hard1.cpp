#include <iostream>
using namespace std;

int main() {
    char faculty, track;
    int year;

    cout << "Enter faculty (c for CS, m for Math): ";
    cin >> faculty;

    switch (faculty) {
        case 'c': case 'C':
            cout << "CS Year (1 or 2): ";
            cin >> year;
            switch (year) {
                case 1: cout << "CS Junior Track" << endl; break;
                case 2: 
                    cout << "Track (a for AI, s for Systems): ";
                    cin >> track;
                    switch (track) {
                        case 'a': case 'A': cout << "AI Specialization" << endl; break;
                        case 's': case 'S': cout << "Systems Specialization" << endl; break;
                        default: cout << "Invalid CS track!" << endl;
                    }
                    break;
                default: cout << "Invalid year!" << endl;
            }
            break;

        case 'm': case 'M':
            cout << "Math Year (1 or 2): ";
            cin >> year;
            switch (year) {
                case 1: cout << "Math Junior Track" << endl; break;
                case 2: cout << "Math Senior Track " << endl; break;
                default: cout << "Invalid year!" << endl;
            }
            break;

        default: cout << "Invalid faculty!" << endl;
    }
    return 0;
}