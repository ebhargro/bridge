#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double result;
    double a, b, c;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter the value of b: ";
    cin >> b;
    cout << "Please enter the value of c: ";
    cin >> c;

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "This equation has infinite number of solutions" << endl;
    }

    else if (a == 0 && b == 0 && c != 0)
    {
        cout << "This equation has no solution" << endl;
    }

    else if (a == 0)
    {
        double result = -c / b;
        cout << "This equation has a single real solution, x =" << result << endl;
    }

    else
    {
        double determinant = b * b - 4 * a * c;
        if (determinant > 0)
        {
            double solution1 = (-b + sqrt(determinant)) / (2 * a);
            double solution2 = (-b - sqrt(determinant)) / (2 * a);
            cout << "This equation has two real solutions," << solution1 << "and" << solution2;
        }
        else if (determinant == 0)
        {

            double singleSolution = -b / (2 * a);
            cout << "This equation has a single real solution x=" << singleSolution << endl;
        }
        else
        {

            cout << "This equation has no real solutions." << endl;
        }
    }

    result = ((b * -1) + sqrt((b * b) - (4 * a * c))) / (2 * a);

    return 0;
}