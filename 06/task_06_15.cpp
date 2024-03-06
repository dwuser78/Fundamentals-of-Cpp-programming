#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    long int n;
    int a = 0;
    int b = 1;
    int c;

    cout << "Enter the number of the Fibonacci sequence: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number must be positive." << endl;

        return 1;
    } else if (n > INT_MAX) {
        cout << "The number is too large." << endl;

        return 1;
    }

    n--;

    while (n > 0) {
        c = a + b;
        a = b;
        b = c;
        --n;
    }

    cout << "This sequence number is equal to: " << b << endl;

    return 0;
}