#include <iostream>
using namespace std;

int main()
{
    int targetNumber = 0, remainder = 0, result = 0, position = 1;
    cout << "Enter decimal number: \n";
    cin >> targetNumber;
    int quotient = targetNumber;

    for (int iterations = 0; quotient > 0; iterations++)
    {

        remainder = quotient % 2;
        result += remainder * position;
        position *= 10;
        quotient /= 2;
    }

    cout << "The binary representation of " << targetNumber << " is " << result << endl;
}