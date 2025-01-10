#include <iostream>

using namespace std;

int main()
{
    int hoursWorked;
    double grossPay = 0, rate = 0;

    cout << "Enter the hourly rate of pay: $";
    cin >> rate;
    cout << "Enter the number of hours worked, \n " << "rounded to a whole number of hours: ";
    cin >> hoursWorked;

    if (hoursWorked > 40)
        grossPay = rate * 40 + 1.5 * rate * (hoursWorked - 40);
    else
        grossPay = rate * hoursWorked;

    // format to two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Hours worked: " << hoursWorked << endl;
    cout << "Hourly rate: $" << rate << endl;
    cout << "Gross pay: $" << grossPay << endl;

    return 0;
}