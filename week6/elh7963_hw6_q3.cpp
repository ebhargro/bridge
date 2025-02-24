#include <iostream>
using namespace std;

double eApprox(int n)
{
    double sum = 0.0;
    double factorial = 1.0;

    for (int k = 0; k <= n; ++k)
    {
        if (k == 0)
        {
            sum += 1.0;
        }
        else
        {
            factorial *= k;
            sum += 1.0 / factorial;
        }
    }
    return sum;
}

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(15);

    for (int n = 1; n <= 15; ++n)
    {
        cout << n << "\t" << eApprox(n) << endl;
    }

    return 0;
}
