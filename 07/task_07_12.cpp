#include <iostream>

using namespace std;

int main() {
    int width;
    int height;

    cout << "Enter the width of the frame: ";
    cin >> width;

    cout << "Enter the height of the frame: ";
    cin >> height;

    for (int i = 0; i < width; i++)
        cout << "-";

    cout << endl;

    for (int i = 0; i < height; i++) {
        cout << "|";

        for (int j = 0; j < width - 2; j++)
            cout << " ";

        cout << "|" << endl;
    }

    for (int i = 0; i < width; i++)
        cout << "-";

    cout << endl;

    return 0;
}