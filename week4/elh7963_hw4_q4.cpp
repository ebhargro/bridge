#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const string RESULT_MSG = "The geometric mean is: ";

int main()
{
    int length = 0;
    float firstResult = 0, secondResult = 0;
    cout << "SECTION A" << endl;
    cout << "Please enter the length of a sequence: ";
    cin >> length;
    cout << "Please enter the sequence:" << endl;

    float firstProduct = 1.0;
    for (int i = 0; i < length; i++)
    {
        int value;
        cin >> value;
        firstProduct *= value;
    }

    firstResult = pow(firstProduct, 1.0 / length);

    cout << RESULT_MSG << firstResult << endl;

    cout << "SECTION B" << endl;
    cout << "\nPlease enter a non-empty sequence of positive integers, each one in a separate line.\n"
         << "End your sequence by typing -1:" << endl;

    float secondProduct = 1.0;
    int countB = 0;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        secondProduct *= value;
        countB++;
    }

    secondResult = pow(secondProduct, 1.0 / countB);

    cout << RESULT_MSG << secondResult << endl;

    return 0;
}