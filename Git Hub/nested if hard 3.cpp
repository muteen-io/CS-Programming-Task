#include <iostream>
using namespace std;

int main() {
    int creditScore;
    double income;
    cout << "Enter Credit Score and Monthly Income: $";
    cin >> creditScore >> income;

    if (creditScore >= 650) {
        if (creditScore >= 750) {
            if (income >= 4000) cout << "Loan Approved! Premium low-interest rate applied.";
            else cout << "Loan Approved! Standard interest rate applied.";
        } else { 
            if (income >= 6000) cout << "Loan Approved! Standard interest rate applied.";
            else cout << "Loan Conditionally Approved: Co-signer required.";
        }
    } else {
        cout << "Loan Rejected: Credit score too low.";
    }
    return 0;
}
