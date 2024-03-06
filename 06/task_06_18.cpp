#include <iostream>
#include <math.h>

#define LIM_MIN 0
#define LIM_MAX 63

using namespace std;

int main()
{
    int min = LIM_MIN;
    int max = LIM_MAX;
    int i = 0;
    char ans;
    int guess;
    int count;

    cout << "Guess the number from " << min << " to " << max << endl;

    guess = (min + max) / 2;
    count = (int) ceil(log2(max - min));

    while (i < count)
    {
        cout << "Is your number greater than " << guess << "? (y/n) ";
        cin >> ans;

        if (tolower(static_cast<unsigned char>(ans)) == 'y')
            min = guess + 1;
        else
            max = guess;

        guess = (min + max) / 2;

        if (max == min)
        {
            cout << "You came up with the number '" << guess << "'!" << endl;

            return 0;
        }

        i++;
    }

    return 0;
}