#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int randomNum = 0, userGuess = 0, lowerLimit = 1, upperLimit = 100, numGuessesLeft = 5;
    srand(time(0));
    randomNum = lowerLimit + (std::rand() % (upperLimit - lowerLimit + 1));
    cout
        << "I thought of a number between 1 and 100! Try to guess it. \n";

    do
    {
        cout << "Range: " << "[" << lowerLimit << "," << upperLimit << "]," << " Number of guesses left: "
             << numGuessesLeft << endl;
        cout << "Your guess: ";
        cin >> userGuess;
        numGuessesLeft--;

        if (userGuess == randomNum)
        {
            cout << "Congrats! You guessed my number in " << 5 - numGuessesLeft << " guesses." << endl;
            break;
        }
        else
        {
            if (userGuess < randomNum)
            {
                cout << "Wrong! My number is bigger. \n";
                lowerLimit = userGuess + 1;
            }
            if (userGuess > randomNum)
            {
                cout << "Wrong! My number is smaller. \n";
                upperLimit = userGuess - 1;
            }
        }

    } while (numGuessesLeft != 0);
    if (userGuess != randomNum && numGuessesLeft == 0)
    {
        cout << "Out of guesses! My number is " << randomNum << endl;
    }
    return 0;
}