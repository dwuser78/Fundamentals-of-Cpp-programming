#include <iostream>
#include <cmath>

#define MAX_X 0.8
#define MAX_Y 0.8
#define MIN_X 0
#define MIN_Y 0
#define STEP_X 0.1
#define STEP_Y 0.1
#define DIGIT_OFFSET 10

using namespace std;

int main() {
    float real_x;
    float real_y;
    float x_center;
    float y_center;
    float x_correction;
    float y_correction;
    int x;
    int y;

    cout << "Enter the real X coordinate: ";
    cin >> real_x;

    if (real_x > MAX_X || real_x < MIN_X) {
        cout << "The X coordinate is out of the field." << endl;

        return 1;
    }

    cout << "Enter the real Y coordinate: ";
    cin >> real_y;

    if (real_y > MAX_Y || real_y < MIN_Y) {
        cout << "The Y coordinate is out of the field." << endl;

        return 1;
    }

    x = static_cast<int>(floor(real_x * DIGIT_OFFSET));
    y = static_cast<int>(floor(real_y * DIGIT_OFFSET));

    x_center = (static_cast<float>(x) / DIGIT_OFFSET) + (STEP_X / 2);
    y_center = (static_cast<float>(y) / DIGIT_OFFSET) + (STEP_Y / 2);

    x_correction = x_center - real_x;
    y_correction = y_center - real_y;

    cout << "The figure is in the cell (" << x << ", " << y << ")." << endl;
    cout << "Correct the position of the figure on (" << x_correction << ", "
        << y_correction <<").";

    return 0;
}