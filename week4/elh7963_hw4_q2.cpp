#include <iostream>
#include <string>

using namespace std;

int main()
{
    int userInput = 0;
    string romanNumeralResult;
    cout << "Enter decimal number: \n";
    cin >> userInput;
    int inputFinalResult = userInput;

    if (inputFinalResult >= 1000)
    {
        int numDigits = inputFinalResult / 1000;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'M';
        }
        inputFinalResult -= (1000 * numDigits);
    }

    if (inputFinalResult >= 500)
    {
        int numDigits = inputFinalResult / 500;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'D';
        }
        inputFinalResult -= (500 * numDigits);
    }

    if (inputFinalResult >= 100)
    {
        int numDigits = inputFinalResult / 100;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'C';
        }
        inputFinalResult -= (100 * numDigits);
    }

    if (inputFinalResult >= 50)
    {
        int numDigits = inputFinalResult / 50;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'L';
        }
        inputFinalResult -= (50 * numDigits);
    }

    if (inputFinalResult >= 10)
    {
        int numDigits = inputFinalResult / 10;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'X';
        }
        inputFinalResult -= (10 * numDigits);
    }

    if (inputFinalResult >= 5)
    {
        int numDigits = inputFinalResult / 5;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'V';
        }
        inputFinalResult -= (5 * numDigits);
    }

    if (inputFinalResult >= 1)
    {
        int numDigits = inputFinalResult / 1;
        for (int iterations = 0; iterations < numDigits; iterations++)
        {
            romanNumeralResult += 'I';
        }
        inputFinalResult -= (1 * numDigits);
    }

    cout << userInput << " is " << romanNumeralResult << endl;
}