#include <iostream>

using namespace std;

int main() {
    int number;
    int digit_cnt = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        number /= 10;
        digit_cnt++;
    }

    cout << "The number contains " << digit_cnt << " characters." << endl;

    return 0;
}