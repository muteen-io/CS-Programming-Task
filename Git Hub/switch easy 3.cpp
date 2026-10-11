#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter calculation (e.g., 5 + 3): ";
    cin >> num1 >> op >> num2;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2; break;
        case '-': cout << "Result: " << num1 - num2; break;
        case '*': cout << "Result: " << num1 * num2; break;
        case '/': cout << "Result: " << num1 / num2; break;
        default: cout << "Invalid Operator!";
    }
    return 0;
}
