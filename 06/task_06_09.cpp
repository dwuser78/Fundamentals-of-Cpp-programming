#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    bool isBinary = true;

    while (number > 0) {
        int remainder = number % 10;

        if (remainder != 0 && remainder != 1) {
            isBinary = false;

            break;
        }

        number /= 10;
    }

    if (isBinary)
        cout << "The number consists only of zeros and ones." << endl;
    else
        cout << "A number does not consist only of zeros and ones." << endl;

    return 0;
}
