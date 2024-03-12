#include <iostream>

#define MAX_NUM 10

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The multiplication table for the number " << num << ":" << endl;

    for (int i = 1; i <= MAX_NUM; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}