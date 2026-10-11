#include <iostream>
using namespace std;

int main() {
    int hour, min;
    cout << "Enter hour (0-23) and minute (0-59): ";
    cin >> hour >> min;

    if (hour < 0 || hour > 23 || min < 0 || min > 59) {
        cout << "Invalid time format!";
    } else {
        cout << "Valid Time. Situation: ";
        if (hour >= 5 && hour < 12) cout << "Morning";
        else if (hour >= 12 && hour < 17) cout << "Afternoon";
        else if (hour >= 17 && hour < 21) cout << "Evening";
        else cout << "Night";
    }
    return 0;
}
