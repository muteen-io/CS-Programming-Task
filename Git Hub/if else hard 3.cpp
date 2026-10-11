#include <iostream>
using namespace std;

int main() {
    double income, tax = 0;
    cout << "Enter annual income: ";
    cin >> income;

    if (income <= 10000) tax = 0;
    else if (income <= 50000) tax = (income - 10000) * 0.10;
    else if (income <= 100000) tax = (40000 * 0.10) + (income - 50000) * 0.20;
    else tax = (40000 * 0.10) + (50000 * 0.20) + (income - 100000) * 0.30;

    cout << "Total Tax: $" << tax;
    return 0;
}
