#include <iostream>
#include <cmath>

#define MAX_X 0.8
#define MAX_Y 0.8
#define MIN_X 0
#define MIN_Y 0
#define OFFSET 10

using namespace std;

int main() {
    float real_x;
    float real_y;
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

    x = static_cast<int>(floor(real_x * OFFSET));
    y = static_cast<int>(floor(real_y * OFFSET));

    cout << "The figure is in the cell (" << x << ", " << y << ")." << endl;

    return 0;
}