#include <iostream>
using namespace std;

int main() {
    char type; 
    double weight;
    cout << "Enter shipping destination type (D/I) and package weight (kg): ";
    cin >> type >> weight;

    if (type == 'I' || type == 'i') {
        if (weight <= 20.0) {
            cout << "Route: International Air Cargo. Shipping Cost: $50";
        } else {
            cout << "Route: International Sea Freight. Shipping Cost: $120";
        }
    } else if (type == 'D' || type == 'd') {
        if (weight <= 5.0) {
            cout << "Route: Domestic Express Courier. Shipping Cost: $10";
        } else {
            cout << "Route: Domestic Ground Trucking. Shipping Cost: $25";
        }
    } else {
        cout << "Invalid shipping type selection.";
    }
    return 0;
}
