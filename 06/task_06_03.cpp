#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int k;
    int n;
    int power = 1;

    cout << "Enter the number K: ";
    cin >> k;

    cout << "Enter the number N: ";
    cin >> n;

    while (power <= n) {
        cout << k << "^" << power << " = " << pow(k, power) << endl;
        power++;
    }

    return 0;
}