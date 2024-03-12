#include <iostream>

using namespace std;

int main() {
    int numCount;
    int sum;
    int num;

    cout << "Enter the number of numbers to add: ";
    cin >> numCount;

    for (int i = 0; i < numCount; i++) {
        cout << "Enter a number: ";
        cin >> num;

        sum += num;
    }

    cout << "The sum of the numbers: " << sum << endl;

    return 0;
}