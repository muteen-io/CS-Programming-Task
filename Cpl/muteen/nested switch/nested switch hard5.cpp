#include <iostream>
using namespace std;

int main() {
    int category, choice;
    cout << "Choose category (1 for Food, 2 for Drinks): ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "You chose Food. Pick item (1: Burger, 2: Pizza): ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Ordered a Burger!" << endl;
                    break;
                case 2:
                    cout << "Ordered a Pizza!" << endl;
                    break;
                default:
                    cout << "Invalid food choice!" << endl;
            }
            break;

        case 2: 
            cout << "You chose Drinks. Pick item (1: Soda, 2: Water): ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Here is your cold Soda." << endl;
                    break;
                case 2:
                    cout << "Here is your bottled Water." << endl;
                    break;
                default:
                    cout << "Invalid drink choice!" << endl;
            }
            break; 

        default:
            cout << "Invalid category selected!" << endl;
    }

    return 0;
}