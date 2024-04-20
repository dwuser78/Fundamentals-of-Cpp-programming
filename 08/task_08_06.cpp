#include <iostream>
#include <cmath>

#define F_OFFSET 1.8
#define ZERO_OFFSET 32

using namespace std;

int main() {
    float lower_limit;
    float upper_limit;
    float degree_step;
    float f_res;
    float c_res;

    cout << "Enter the lower limit: ";
    cin >> lower_limit;

    cout << "Enter the upper limit: ";
    cin >> upper_limit;

    if (lower_limit > upper_limit) {
        cout << "The lower limit cannot be greater than the upper limit."
            << endl;

        return 1;
    }

    cout << "Enter the degree step: ";
    cin >> degree_step;

    if (degree_step <= 0) {
        cout << "The degree step cannot be less than or equal to zero."
            << endl;

        return 1;
    }

    cout << "C\tF" << endl;

    for (float c_res = lower_limit; c_res <= upper_limit; c_res += degree_step) {
        f_res = (F_OFFSET * c_res) + ZERO_OFFSET;

        cout << c_res << "\t" << f_res << endl;
    }

    return 0;
}