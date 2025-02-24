#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num)
{
    int root = static_cast<int>(sqrt(num));
    bool firstPrinted = false;

    for (int i = 1; i <= root; i++)
    {
        if (num % i == 0)
        {
            if (!firstPrinted)
            {
                cout << i;
                firstPrinted = true;
            }
            else
            {
                cout << " " << i;
            }
        }
    }

    for (int i = root; i >= 1; i--)
    {
        if (num % i == 0)
        {
            int other = num / i;
            if (other != i)
            {
                if (!firstPrinted)
                {
                    cout << other;
                    firstPrinted = true;
                }
                else
                {
                    cout << " " << other;
                }
            }
        }
    }
}

int main()
{
    int num;
    cout << "Please enter a positive integer >= 2: ";
    cin >> num;

    printDivisors(num);
    cout << endl;

    return 0;
}
