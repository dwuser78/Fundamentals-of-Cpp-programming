#include <iostream>

#define MAX_SUM 42

using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    bool isCorrect = false;

    while (!isCorrect) {
        cout << "Enter the 1st number: ";
        cin >> num1;

        cout << "Enter the 2nd number: ";
        cin >> num2;

        cout << "Enter the 3rd number: ";
        cin >> num3;

        cout << "Enter the 4th number: ";
        cin >> num4;

        int sum = num1 + num2 + num3 + num4;

        if (sum == MAX_SUM) {
            cout << "The input is correct" << endl;

            isCorrect = true;
        } else {
            cout << "The input is incorrect, try again" << endl;
        }
    }

    return 0;
}