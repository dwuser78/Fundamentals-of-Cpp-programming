#include <iostream>
#include <cmath>

#define KC_PRICE 2200
#define GRAVICAP_PRICE 1100

using namespace std;

int main() {
    float chatls;
    int kcs;
    int gravicaps;

    cout << "Enter the number of chatls: ";
    cin >> chatls;

    kcs = static_cast<int>(floor(chatls / KC_PRICE));
    gravicaps = static_cast<int>(floor(chatls / GRAVICAP_PRICE));

    cout << "For " << chatls << " chatl(s) you can buy:" << endl;
    cout << "KCs: " << kcs << endl;
    cout << "Gravicaps: " << gravicaps << endl;

    return 0;
}