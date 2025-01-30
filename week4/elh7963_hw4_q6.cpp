#include <iostream>

using namespace std;

int main()
{
    int userInput = 0;
    cout << "Enter a positive integer n: ";
    cin >> userInput;

    for (int i = 1; i <= userInput; i++)
    {
        int currentNum = i;
        int evens = 0, odds = 0;
        while (currentNum > 0)
        {
            int digit = currentNum % 10;
            if (digit % 2 == 0)
            {
                evens++;
            }
            else
            {
                odds++;
            }
            currentNum /= 10;
        }

        if (evens > odds)
        {
            cout << i << endl;
        }
    }

    return 0;
}