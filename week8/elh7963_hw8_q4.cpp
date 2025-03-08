#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{

    string realPin = "23113";

    int mapping[10];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 10; i++)
    {
        mapping[i] = (rand() % 3) + 1;
    }

    string expectedCode;
    for (int i = 0; i < static_cast<int>(realPin.size()); i++)
    {
        int digit = realPin[i] - '0';
        expectedCode.push_back(static_cast<char>(mapping[digit] + '0'));
    }

    cout << "PIN: ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << "\nNUM: ";
    for (int i = 0; i < 10; i++)
    {
        cout << mapping[i] << " ";
    }
    cout << "\n\n";

    cout << "Please enter your PIN according to the above mapping: ";
    string userInput;
    cin >> userInput;

    if (userInput == expectedCode)
    {
        cout << "Your PIN is correct" << endl;
    }
    else
    {
        cout << "Your PIN is not correct" << endl;
    }

    return 0;
}
