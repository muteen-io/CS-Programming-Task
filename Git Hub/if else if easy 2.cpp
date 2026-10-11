#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    if (score >= 90) cout << "Grade: A";
    else if (score >= 75) cout << "Grade: B";
    else if (score >= 50) cout << "Grade: C";
    else cout << "Grade: F";

    return 0;
}
