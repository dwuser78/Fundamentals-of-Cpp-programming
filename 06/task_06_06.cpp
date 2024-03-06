#include <iostream>

using namespace std;

int main() {
    int numCount;
    int sum = 0;

    cout << "Enter the number of numbers to add: ";
    cin >> numCount;

    while (numCount > 0) {
        cout << "Enter a number: ";

        int num;

        cin >> num;

        sum += num;
        numCount--;
    }

    cout << "The sum of the numbers: " << sum << endl;

    return 0;
}
