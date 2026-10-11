#include <iostream>
using namespace std;

int main() {
    char device, speed;
    int mode;

    cout << "Select device (a for AC, h for Heater): ";
    cin >> device;

    switch (device) {
        case 'a': case 'A':
            cout << "AC Mode (1: Eco, 2: Turbo): ";
            cin >> mode;
            switch (mode) {
                case 1: cout << "AC running in Eco Mode." << endl; break;
                case 2:
                    cout << "Fan Speed (h for High, l for Low): ";
                    cin >> speed;
                    switch (speed) {
                        case 'h': case 'H': cout << "AC Turbo - High Fan" << endl; break;
                        case 'l': case 'L': cout << "AC Turbo - Low Fan" << endl; break;
                        default: cout << "Invalid fan speed!" << endl;
                    }
                    break;
                default: cout << "Invalid AC mode!" << endl;
            }
            break;

        case 'h': case 'H':
            cout << "Heater activated on Standard setting." << endl;
            break;

        default: cout << "Unknown device!" << endl;
    }
    return 0;
}