#include <iostream>
using namespace std;

int main() {
    int age;
    double weight;
    cout << "Enter age and weight (kg): ";
    cin >> age >> weight;

    if (age >= 18 && age <= 65) {
        if (weight >= 50.0) {
            cout << "You are eligible to donate blood.";
        } else {
            cout << "Ineligible: Underweight.";
        }
    } else {
        cout << "Ineligible: Age must be between 18 and 65.";
    }
    return 0;
}
