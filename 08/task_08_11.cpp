#include <iostream>
#include <cmath>

#define MIN_BR 0
#define MAX_BR 255
#define MIN_POI 0
#define MAX_POI 1

using namespace std;

int main() {
    float left_boundary;
    float right_boundary;
    float poi;
    float brightness;

    cout << "Enter the brightness of the left boundary of the gradient: ";
    cin >> left_boundary;

    cout << "Enter the brightness of the right boundary of the gradient: ";
    cin >> right_boundary;

    if ((left_boundary < MIN_BR || left_boundary > MAX_BR) ||
        (right_boundary < MIN_BR || right_boundary > MAX_BR)) {
        cout << "The parameter value must be between " << MIN_BR << " and "
            << MAX_BR << endl;

        return 1;
    }

    cout << "Enter the desired point: ";
    cin >> poi;

    if (poi < MIN_POI || poi > MAX_POI) {
        cout << "The parameter value must be between " << MIN_POI << " and "
            << MAX_POI << endl;

        return 1;
    }

    brightness = left_boundary + (right_boundary - left_boundary) * poi;

    cout << "Point Brightness: " << brightness << endl;

    return 0;
}