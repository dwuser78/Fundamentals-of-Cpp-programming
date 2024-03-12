#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    if (height < 1) {
        cout << "Incorrect height value." << endl;

        return 1;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++)
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++)
            cout << "#";

        cout << endl;
    }

    return 0;
}