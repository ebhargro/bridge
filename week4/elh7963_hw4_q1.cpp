#include <iostream>
#include <string>

using namespace std;

const string USER_PROMPT = "Please enter a positive integer: ";

int main()
{
    int userInput1 = 0, userInput2 = 0;
    cout << "SECTION A" << endl;
    cout << USER_PROMPT;
    cin >> userInput1;
    int evenNums = 2;
    int count = 0;
    while (count < userInput1)
    {
        cout << evenNums << "\n";
        evenNums += 2;
        count++;
    }

    cout << "SECTION B" << endl;
    cout << USER_PROMPT;
    cin >> userInput2;
    int secondCount = 0;

    for (evenNums = 2; secondCount < userInput2; evenNums += 2)
    {
        cout << evenNums << '\n';
        secondCount++;
    }

    return 0;
}
