#include <iostream>

using namespace std;

int main()
{
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    float num;
    int method, roundedNum, decimal;

    cout << "Please enter a Real number: \n";
    cin >> num;
    cout << "Choose your rounding method: \n 1. Floor round \n 2. Ceiling round \n 3. Round to the nearest whole number \n";
    cin >> method;

    switch (method)
    {
    case FLOOR_ROUND:
        roundedNum = int(num);
        break;
    case CEILING_ROUND:
        roundedNum = int(num) + 1;
        break;
    case ROUND:
        decimal = num - (int(num));
        if (decimal >= .50)
        {
            roundedNum = (int(num)) + 1;
        }
        else
        {
            roundedNum = int(num);
        }

        break;
    default:
        cout << "Please enter a valid rounding method" << endl;
    }

    cout << roundedNum << endl;
}