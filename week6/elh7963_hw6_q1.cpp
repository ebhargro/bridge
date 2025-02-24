#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    int prev1 = 1;
    int prev2 = 1;
    int current;

    for (int i = 3; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main()
{
    int num;
    cout << "Please enter a positive integer: ";
    cin >> num;

    cout << fib(num) << endl;

    return 0;
}
