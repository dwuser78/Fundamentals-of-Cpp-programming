#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float mass;
    float force;
    float time;
    float acceleration;
    float distance;

    cout << "Enter the mass of the starship: ";
    cin >> mass;

    if (mass <= 0) {
        cout << "The mass of a starship cannot be 0." << endl;

        return 1;
    }

    cout << "Enter the thrust force of the engine: ";
    cin >> force;

    if (force < 0) {
        cout << "The thrust force of the engine cannot be negative." << endl;

        return 1;
    }

    cout << "Enter the engine running time: ";
    cin >> time;

    if (time < 0) {
        cout << "The engine running time cannot be negative." << endl;

        return 1;
    }

    acceleration = force / mass;
    distance = (acceleration * pow(time, 2)) / 2;

    cout << "The distance traveled by the starship: " << distance << endl; 

return 0;
}