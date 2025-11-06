#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    char rollChoice;

    cout << "Would you like to roll the die? Type Y for (yes) / any other key for (no): ";
    cin >> rollChoice;
    cout << endl;

    while (rollChoice == 'Y' || rollChoice == 'y')
    {
        // Generate a random number from 1 - 6
        int dieRoll = (rand() % 6) + 1;

        cout << "You rolled a " << dieRoll << "!" << endl;
        cout << "\nWould you like to roll again? Type Y for (yes) / any other key for (no): ";
        cin >> rollChoice;
        cout << endl;
    }

    cout << "Thanks for playing. Farewell!" << endl;
    return 0;
}
