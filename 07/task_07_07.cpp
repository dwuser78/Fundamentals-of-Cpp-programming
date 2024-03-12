#include <iostream>
#include <math.h>

#define MAX_PLOT 1000000

using namespace std;

int main() {
    int area;
    int root;
    int rootSquared;

    for (;;) {
        cout << "Enter the area of the plot: ";
        cin >> area;

        if (area > MAX_PLOT) {
            cout << "There are no such plots in the city." << endl;

            break;
        }

        root = sqrt(area);
        rootSquared = root * root;

        if (area == rootSquared)
            cout << "The area of the plot is an exact square." << endl;
        else
            cout << "The plot area is not an exact square." << endl;
    }

    return 0;
}