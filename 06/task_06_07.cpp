#include <iostream>

#define MAX_SUM 42

using namespace std;

int main() {
    int num;
    int sum = 0;
    int i = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (i < num) {
        sum += num % 10;
        num /= 10;

        if (sum > MAX_SUM)
            break;

        i++;
    }

    if (sum == MAX_SUM)
        cout << "The input is correct" << endl;
    else
        cout << "The input is incorrect" << endl;

    return 0;
}
