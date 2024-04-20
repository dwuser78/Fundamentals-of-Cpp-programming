#include <iostream>
#include <cmath>

#define MAX_H 828
#define MIN_H 0
#define STEP_F 3.975
#define FIRST_F 1

using namespace std;

int main() {
    float height;
    int curr_floor;

    cout << "Enter the height at which the elevator stopped: ";
    cin >> height;

    if (height > MAX_H || height < MIN_H) {
        cout << "The height is set incorrectly." << endl;

        return 1;
    }

    curr_floor = static_cast<int>(round(height / STEP_F)) + FIRST_F;

    cout << "Elevator on the " << curr_floor << " floor." << endl;

    return 0;
}