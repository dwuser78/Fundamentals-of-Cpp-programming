#include <iostream>
#include <string>

using namespace std;

int main() {
    int remind_times;
    string reminder;

    cout << "Enter the number of reminders: ";
    cin >> remind_times;
    cin.ignore();

    cout << "Enter a reminder phrase: ";
    getline(cin, reminder);

    int i = 0;

    while (i < remind_times) {
        cout << "You didn't want to forget '" << reminder << "'." << endl;
        i++;
    }

    return 0;
}