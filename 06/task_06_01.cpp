#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;

    while (true) {
        cout << "Did you do yesterday's tasks?" << endl;
        getline(cin, answer);

        if (answer == "Yes, of course I did") {
            break;
        }
    }

    cout << "OK. Now you can start new tasks." << endl;

    return 0;
}