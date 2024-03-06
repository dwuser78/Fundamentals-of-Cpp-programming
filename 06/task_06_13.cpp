#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double debt;
    double payment;
    double acc_balance = 0;

    cout << "Enter the name of the debtor: ";
    cin >> name;

    cout << "Enter the amount of debt: ";
    cin >> debt;

    while (debt > 0) {
        cout << "Enter the payment amount: ";
        cin >> payment;

        if (payment > debt) {
            cout << "The amount deposited exceeds the amount owed. The balance "
                    "has been transferred to the account." << endl;

            acc_balance += (payment - debt);
            debt = 0;
        } else {
            debt -= payment;

            cout << "The balance of the debt: " << debt << endl;
            cout << "Account balance: " << acc_balance << endl;
        }
    }

    cout << "The debt has been fully repaid." << endl;
    cout << "Account balance: " << acc_balance << endl;

    return 0;
}