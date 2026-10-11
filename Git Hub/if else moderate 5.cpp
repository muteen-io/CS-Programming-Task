#include <iostream>
using namespace std;
int main() {
    double total;
    cout << "Enter total cart value: $";
    cin >> total;
    if (total > 100) {
        total = total - (total * 0.10);
    }
    if (total < 50) {
        total += 5; 
        cout << "Shipping fee added. ";
    }
    cout << "Final Amount to Pay: $" << total;
    return 0;
}
