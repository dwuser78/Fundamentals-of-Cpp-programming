#include <iostream>

using namespace std;

int main() {
    double x;
    double y;
    double p;
    int years = 0;

    cout << "Enter the initial deposit amount: ";
    cin >> x;

    cout << "Enter the desired deposit amount: ";
    cin >> y;

    cout << "Enter the percentage of the deposit increase: ";
    cin >> p;

    while (x < y) {
        x = x  *  (1 + p / 100);
        years++;
    }

    cout << "The deposit will reach the desired amount in " << years <<
        " year(s).";

    return 0;
}