#include <iostream>

#define TIME_TO_BOOM 10

using namespace std;

int main() {
    int time;
    char ans;
    bool defused = false;

    for (time = 0; time < TIME_TO_BOOM; time++) {
        cout << "Would you like to cut the wire now? (y/n) ";
        cin >> ans;
        cin.ignore();

        if (tolower(static_cast<unsigned char>(ans)) == 'y') {
            defused = true;
            break;
        }
    }

    if (defused) {
        cout << "You defused the bomb!" << endl;
        cout << "The time before the explosion: " <<
            TIME_TO_BOOM - time << endl;
    } else {
        cout << "BOOM!" << endl;
    }

    return 0;
}