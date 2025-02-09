#include <iostream>

using namespace std;

int main()
{
    int userInput = 0;
    cout << "Please enter a positive integer: \n";
    cin >> userInput;
    for (int i = 1; i <= userInput; i++)
    {

        int n = i;
        for (int j = 1; j <= userInput; j++)
        {
            cout << n;
            cout << "\t";
            n += i;
        }
        cout << endl;
    }
    return 0;
}