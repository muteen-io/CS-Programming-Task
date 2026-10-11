#include <iostream>
using namespace std;

int main() {
    int age;
    char format; 
    
    cout << "Enter age and ticket format (3 for 3D, 2 for 2D): ";
    cin >> age >> format;
    
    int price = 0;

    if (age > 60) {
        if (format == '3') price = 12;
        else price = 9;
    } else {
        if (age < 12) {
            if (format == '3') price = 8;
            else price = 5;
        } else {
            if (format == '3') price = 15;
            else price = 11;
        }
    }

    cout << "Ticket Price: $" << price << endl;
    return 0;
}