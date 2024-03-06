#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string input;

    cout << "What's your name?" << endl;
    getline(cin, name);

    cout << name << ", buy an elephant." << endl;

    while (true) {
        getline(cin, input);
        cout << "Everyone says '" << input <<
            "', and you buy an elephant!" << endl;
    }

    return 0;
}