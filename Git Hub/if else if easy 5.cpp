#include <iostream>
using namespace std;

int main() {
    char light;
    cout << "Enter light color (R for Red, Y for Yellow, G for Green): ";
    cin >> light;

    if (light == 'R' || light == 'r') cout << "STOP!";
    else if (light == 'Y' || light == 'y') cout << "SLOW DOWN!";
    else if (light == 'G' || light == 'g') cout << "GO!";
    else cout << "Invalid Input!";

    return 0;
}
