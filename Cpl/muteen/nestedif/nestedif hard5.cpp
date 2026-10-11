#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    
    if (num % 3 == 0) {
       
        if (num % 5 == 0) {
            cout << "Multiple of both 3 and 5!" << endl;
        } else {
            cout << "Multiple of 3 only." << endl;
        }
    } else {
        
        if (num % 5 == 0) {
            cout << "Multiple of 5 only." << endl;
        } else {
            cout << "Not a multiple of 3 or 5." << endl;
        }
    }

    return 0;
}