#include <iostream>

using namespace std;

int main()
{
    int num = 0, i, j;
    cout << "Enter a number and I will create a right and left triangle: ";
    cin >> num;
    // left
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // right
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}