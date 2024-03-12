#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;
    int attempts = 1;

    for (;; attempts++) {
        cout << "Did you do yesterday's tasks?" << endl;
        getline(cin, answer);

        if (answer == "Yes, of course I did") {
            break;
        }
    }

    if (attempts > 1)
        cout << "Why do I have to ask you " << attempts << " times?" << endl;

    cout << "OK. Now you can start new tasks." << endl;

    return 0;
}