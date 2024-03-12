#include <iostream>

#define BAG_CAPACITY 100
#define PORTION_SIZE 4

using namespace std;

int main() {
    int rest;
    int months = 0;

    cout << "Total buckwheat was at the beginning of the calculation: " <<
        BAG_CAPACITY << " kg" << endl;

    for (rest = BAG_CAPACITY; rest >= PORTION_SIZE; rest -= PORTION_SIZE) {
        if (months != 0) {
            cout << "After " << months << " month(s) there will be " << rest <<
                " kg of buckwheat left" << endl;
        }

        months++;
    }

    cout << "After " << months <<
        " month(s) there will be no buckwheat left" << endl;

    return 0;
}