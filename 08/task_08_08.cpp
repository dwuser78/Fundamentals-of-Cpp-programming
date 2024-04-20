#include <iostream>
#include <cmath>

#define MAX_X 0.8
#define MAX_Y 0.8
#define MIN_X 0
#define MIN_Y 0
#define DIGIT_OFFSET 10

using namespace std;

int main() {
    float real_x;
    float real_y;
    int x;
    int y;
    int move_x;
    int move_y;
    const int move_offsets[][2]={
        {1,-2},
        {2,-1},
        {2,1},
        {1,2},
        {-1,2},
        {-2,1},
        {-2,-1},
        {-1,-2}
    };
    bool move_possible = false;

    cout << "Enter the real coordinates of the chess knight on the board: "
        << endl;

    cout << "X: ";
    cin >> real_x;

    if (real_x > MAX_X || real_x < MIN_X) {
        cout << "The X coordinate is out of the field." << endl;

        return 1;
    }

    cout << "Y: ";
    cin >> real_y;

    if (real_y > MAX_Y || real_y < MIN_Y) {
        cout << "The Y coordinate is out of the field." << endl;

        return 1;
    }

    x = static_cast<int>(floor(real_x * DIGIT_OFFSET));
    y = static_cast<int>(floor(real_y * DIGIT_OFFSET));

    cout << "Enter the coordinates for the move: " << endl;

    cout << "X: ";
    cin >> real_x;

    if (real_x > MAX_X || real_x < MIN_X) {
        cout << "The X coordinate is out of the field." << endl;

        return 1;
    }

    cout << "Y: ";
    cin >> real_y;

    if (real_y > MAX_Y || real_y < MIN_Y) {
        cout << "The Y coordinate is out of the field." << endl;

        return 1;
    }

    move_x = static_cast<int>(floor(real_x * DIGIT_OFFSET));
    move_y = static_cast<int>(floor(real_y * DIGIT_OFFSET));

    if (x == move_x && y == move_y) {
        cout << "The coordinates for the move must be different from the "
            "current ones." << endl;

        return 1;
    }

    cout << "The knight is in the cage (" << x << ", " << y << "). The "
        "point in the cage (" << move_x << ", " << move_y << ")." << endl;

    for (int i = 0; i < 8; i++) {
        if (x + move_offsets[i][0] == move_x && y + move_offsets[i][1] == move_y) {
            move_possible = true;
            break;
        }
    }

    if (move_possible)
        cout << "Yes, the knight can walk to this point." << endl;
    else
        cout << "No, the knight can't walk to this point." << endl;

    return 0;
}