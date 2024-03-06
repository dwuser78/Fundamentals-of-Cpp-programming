#include <iostream>

using namespace std;

int main() {
    int hours;
    int i = 0;

    cout << "Enter the number of hours: ";
    cin >> hours;

    if (hours < 0) {
        cout << "The number of hours cannot be negative." << endl;

        return 1;
    }
    else if (hours > 23) {
        cout << "There cannot be more than 24 hours in a day." << endl;

        return 1;
    }

    while (i < hours) {
        cout << "Cuckoo!" << endl;
        i++;
    }

    return 0;
}