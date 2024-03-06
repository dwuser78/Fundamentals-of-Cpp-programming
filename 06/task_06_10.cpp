#include <iostream>

using namespace std;

int main() {
    int number;
    int reversedNumber = 0;
    int remainder;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber  *  10 + remainder;
        number /= 10;
    }

    cout << "The number is backwards: " << reversedNumber << endl;

    return 0;
}
