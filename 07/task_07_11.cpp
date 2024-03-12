#include <iostream>

#define MAX_X 15
#define MAX_Y 20
#define START_X 7
#define START_Y 10

using namespace std;

int main() {
    int x_pos = START_X;
    int y_pos = START_Y;
    char direction;
    bool keep_mission = true;

    while (keep_mission) {
        cout << "The rover is in position: " << x_pos << ", " << y_pos << endl;
        cout << "Enter the direction (W - north, S - south, A - west, "
            "B - east, J - ejection): ";
        cin >> direction;
        cin.ignore();

        switch (tolower(static_cast<unsigned char>(direction))) {
            case 'w':
                if (y_pos > 0)
                    y_pos--;
                break;

            case 's':
                if (y_pos < MAX_Y)
                    y_pos++;
                break;

            case 'a':
                if (x_pos > 0)
                    x_pos--;
                break;

            case 'b':
                if (x_pos < MAX_X)
                    x_pos++;
                break;

            case 'j':
                keep_mission = false;
                break;

            default:
                cout << "Invalid direction!" << endl;
                break;
        }
    }

    cout << "The mission is complete!" << endl;

    return 0;
}