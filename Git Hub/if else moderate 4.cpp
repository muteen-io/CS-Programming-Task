#include <iostream>
using namespace std;

int main() {
    char p1, p2;
    cout << "Player 1 & 2, enter choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> p1 >> p2;

    if (p1 == p2) {
        cout << "It's a Tie!";
    } else if ((p1 == 'R' && p2 == 'S') || (p1 == 'P' && p2 == 'R') || (p1 == 'S' && p2 == 'P')) {
        cout << "Player 1 Wins!";
    } else {
        cout << "Player 2 Wins!";
    }
    return 0;
}
