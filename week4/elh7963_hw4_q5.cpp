#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input = 0;

    cout << "Enter a positive integer: ";
    cin >> input;

    for (int lines = 0; lines < input; lines++)
    {
        for (int asterisks = 0; asterisks < lines; asterisks++)
        {
            cout << " ";
        }
        for (int asterisks = 0; asterisks < 2 * (input - lines); asterisks++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int lines = 0; lines < input; lines++)
    {
        for (int asterisks = 0; asterisks < input - 1 - lines; asterisks++)
        {
            cout << " ";
        }
        for (int asterisks = 0; asterisks < 2 * (lines + 1); asterisks++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}