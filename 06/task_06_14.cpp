#include <iostream>

#define NUM_DIGITS 6

using namespace std;

int main() {
    int ticket_number;
    int digit;
    int first_half_sum = 0;
    int second_half_sum = 0;
    int count = 0;

    cout << "Enter the " << NUM_DIGITS << "-digit ticket number: ";
    cin >> ticket_number;

    while (ticket_number > 0) {
        digit = ticket_number % 10;

        if (count < NUM_DIGITS / 2)
            first_half_sum += digit;
        else
            second_half_sum += digit;

        ticket_number /= 10;
        count++;
    }

    if (count != NUM_DIGITS) {
        cout << "The entered number is not a " << NUM_DIGITS <<
            "-digit number." << endl;

        return 0;
    }

    if (first_half_sum == second_half_sum)
        cout << "The entered ticket number is a lucky one." << endl;
    else
        cout << "The entered ticket number is not a lucky one." << endl;

    return 0;
}