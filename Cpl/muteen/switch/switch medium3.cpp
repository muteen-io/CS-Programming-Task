#include <iostream>
using namespace std;

int main() {
    char letter;
    cout << "Enter a single letter: ";
    cin >> letter;

    switch (letter) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            cout << " Vowel" << endl;
            break;
        default:
            cout << " Consonant" << endl;
    }

    return 0;
}