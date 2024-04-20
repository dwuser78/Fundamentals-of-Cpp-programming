#include <iostream>

#define MIN_VAL 0
#define MAX_VAL 1

using namespace std;

int main() {
    float power;
    float resistance;
    float damage;
    float health_level;
    bool orc_alive = true;

    cout << "Enter the orc's health level: ";
    cin >> health_level;

    if (health_level < MIN_VAL || health_level > MAX_VAL) {
        cout << "The parameter value must be between " << MIN_VAL << " and "
            << MAX_VAL << endl;

        return 1;
    }

    cout << "Enter magic resistance: ";
    cin >> resistance;

    if (resistance < MIN_VAL || resistance > MAX_VAL) {
        cout << "The parameter value must be between " << MIN_VAL << " and "
            << MAX_VAL << endl;

        return 1;
    }

    while (orc_alive) {
        cout << "Enter the power of the fireball: ";
        cin >> power;

        if (power < MIN_VAL || power > MAX_VAL) {
            cout << "The parameter value must be between " << MIN_VAL
                << " and " << MAX_VAL << endl;

            return 1;
        }

        damage = power * (MAX_VAL - resistance);
        health_level -= damage;

        cout << "The power of the fireball is " << power << ", the resistance "
            "is " << resistance << ", the orc will be dealt "
            << damage << " damage." << endl;

        if (health_level <= MIN_VAL) {
            orc_alive = false;

            cout << "The orc is destroyed." << endl;
        }
    }

    return 0;
}