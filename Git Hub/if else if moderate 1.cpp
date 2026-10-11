#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight (kg) and height (meters): ";
    cin >> weight >> height;

    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << "\nCategory: ";

    if (bmi < 18.5) cout << "Underweight";
    else if (bmi < 24.9) cout << "Normal weight";
    else if (bmi < 29.9) cout << "Overweight";
    else cout << "Obese";

    return 0;
}
