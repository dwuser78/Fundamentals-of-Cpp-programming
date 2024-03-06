#include <iostream>
#include <string>

using namespace std;

int calc_gcd(int a, int b) {
    int shift;
    int tmp;

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    for (shift = 0; ((a | b) & 1) == 0; ++shift) {
        a >>= 1;
        b >>= 1;
    }

    while ((a & 1) == 0)
        a >>= 1;

    do {
        while ((b & 1) == 0)
            b >>= 1;

        if (a > b) {
            tmp = b;
            b = a;
            a = tmp;
        }

        b = b - a;

    } while (b != 0);

    return a << shift;
}

int main() {
    int m, n;
    int gcd;
    bool neg_answer;

    cout << "Enter the numerator: ";
    cin >> m;

    cout << "Enter the denominator: ";
    cin >> n;

    neg_answer = ((m < 0) || (n < 0));

    if (m < 0)
        m = -m;

    if (n < 0)
        n = -n;

    gcd = calc_gcd(abs(m), abs(n));

    cout << "Result: ";

    if (neg_answer)
        cout << "-";

    cout << m / gcd << "/" << n / gcd << endl;

    return 0;
}