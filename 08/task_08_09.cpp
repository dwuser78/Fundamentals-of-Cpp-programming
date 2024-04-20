#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

#define MAX_ANGLE 0.28
#define MIN_ANGLE -0.28

using namespace std;

int main() {
    float angle_deg;
    float angle_rad;

    cout << "Enter the angle in degrees: ";
    cin >> angle_deg;

    angle_rad =  (M_PI * angle_deg) / 180;

    if (angle_rad > MAX_ANGLE || angle_rad < MIN_ANGLE)
        cout << "The angle is unsafe." << endl;
    else
        cout << "The angle is safe." << endl;

    return 0;
}