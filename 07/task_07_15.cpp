#include <iostream>

#define ANTIBAC_EFFICIENCY 10

using namespace std;

int main() {
    int bac_num;
    int antibac_num;
    int antibac_capacity;
    int hours = 0;

    cout << "Enter the number of bacteria: ";
    cin >> bac_num;

    if (bac_num < 1) {
        cout << "Too few bacteria." << endl;

        return 1;
    }

    cout << "Enter the amount of antibiotic: ";
    cin >> antibac_num;

    if (antibac_num < 1) {
        cout << "Too little antibiotic." << endl;

        return 1;
    }

    antibac_capacity = antibac_num * ANTIBAC_EFFICIENCY;

    for (; antibac_capacity > 0; antibac_capacity--) {
        hours++;
        bac_num *= 2;
        bac_num -= antibac_capacity;

        cout << "After " << hours << " hour(s), there are ";

        if (bac_num > 0){
            cout << bac_num << " bacteria left." << endl;
        } else {
            cout << "no bacteria left." << endl;
            break;
        }
    }

    return 0;
}