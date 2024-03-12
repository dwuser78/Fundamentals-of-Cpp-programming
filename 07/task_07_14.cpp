#include <iostream>

using namespace std;

int main() {
    int width;
    int exclam_marks;
    int tildes = 0;

    cout << "Enter the width of the advert: ";
    cin >> width;

    if (width < 3) {
        cout << "The ad is too short." << endl;

        return 1;
    }

    cout << "Enter the number of exclamation marks: ";
    cin >> exclam_marks;

    if (exclam_marks < 1) {
        cout << "There are too few exclamation marks." << endl;

        return 1;
    }

    tildes = width - exclam_marks;

    for (int i = 0; i < width; i++) {
        if (i > (tildes / 2 - 1) && i < (tildes / 2 + exclam_marks))
            cout << "!";
        else
            cout << "~";
    }

    cout << endl;

    return 0;
}