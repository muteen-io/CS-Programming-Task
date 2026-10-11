#include <iostream>
using namespace std;
int main() {
    int balance = 5000, amount;
    cout << "Enter withdrawal amount (Multiples of 10): $";
    cin >> amount;
    if (amount > balance) {
        cout << "Transaction Failed: Insufficient funds.";
    } else if (amount % 10 != 0 || amount <= 0) {
        cout << "Transaction Failed: Invalid amount format.";
    } else {
        int notes50 = amount / 50;
        int notes10 = (amount % 50) / 10;       
        cout << "Withdrawal Successful!\n";
        cout << "Dispensed: " << notes50 << " x $50 bills and " << notes10 << " x $10 bills.";
    }
    return 0;
}
