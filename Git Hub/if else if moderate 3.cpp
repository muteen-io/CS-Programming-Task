#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp <= 0) cout << "Freezing weather";
    else if (temp <= 15) cout << "Cold weather";
    else if (temp <= 25) cout << "Pleasant weather";
    else if (temp <= 40) cout << "Hot weather";
    else cout << "Extremely hot weather";

    return 0;
}
