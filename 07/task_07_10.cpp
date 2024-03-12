#include <iostream>

#define AMER_WATER 300
#define AMER_MILK 0
#define LATTE_WATER 270
#define LATTE_MILK 30

using namespace std;

int main() {
    int water = 0;
    int milk = 0;
    int americano = 0;
    int latte = 0;
    int coffee_type;
    bool americano_available = true;
    bool latte_available = true;

    cout << "Enter the amount of water in ml: ";
    cin >> water;

    cout << "Enter the amount of milk in ml: ";
    cin >> milk;

    while (americano_available || latte_available) {
        cout << "Enter the type of coffee (1 - americano, 2 - latte): ";
        cin >> coffee_type;

        if (coffee_type == 1) {
            if (water >= AMER_WATER && milk >= AMER_MILK) {
                water -= AMER_WATER;
                milk -= AMER_MILK;
                americano++;
                cout << "Americano coffee is ready!" << endl;
            } else {
                cout << "Not enough ingredients for americano coffee." << endl;
                americano_available = false;
            }
        } else if (coffee_type == 2) {
            if (water >= LATTE_WATER && milk >= LATTE_MILK) {
                water -= LATTE_WATER;
                milk -= LATTE_MILK;
                latte++;
                cout << "Latte coffee is ready!" << endl;
            } else {
                cout << "Not enough ingredients for latte coffee." << endl;
                latte_available = false;
            }
        }
    }

    cout << "Report:" << endl;
    cout << "Water: " << water << " ml" << endl;
    cout << "Milk: " << milk << " ml" << endl;
    cout << "Americano coffees: " << americano << endl;
    cout << "Latte coffees: " << latte << endl;

    return 0;
}