#include <iostream>

#define X_SIZE 50
#define Y_SIZE 22

using namespace std;

int main() {

    for (int y = 0; y < Y_SIZE; y++) {
        for (int x = 0; x < X_SIZE; x++) {
            if (y != Y_SIZE / 2)
                cout << " ";
            else if (y == Y_SIZE / 2)
                cout << "-";

            if (x == X_SIZE - 1) {
                if (y == Y_SIZE / 2)
                    cout << ">";
            } else if (x == X_SIZE / 2) {
                if (y == 0)
                    cout << "^";
                else if (y == Y_SIZE / 2)
                    cout << "+";
                else
                    cout << "|";
            }
        }

        cout << endl;
    }

    return 0;
}