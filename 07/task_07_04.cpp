#include <iostream>

#define START_NUM 1

using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = START_NUM; i <= num; i++) {
        if ((i % 2) != 0)
            sum += i;
    }

    cout << "The sum of odd numbers from " << START_NUM << " to " << num <<
        " is equal to: " << sum << endl;

  return 0;
}