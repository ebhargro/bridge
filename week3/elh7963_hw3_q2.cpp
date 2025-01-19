#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, status;
    int gradYear, currentYear = 0, diff;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> gradYear;
    cout << "Please enter current year: ";
    cin >> currentYear;

    diff = gradYear - currentYear;

    if (diff <= 0)
    {
        status = "Graduated";
    }
    else if (diff > 4)
    {
        status = "Not in college yet";
    }
    else if (diff == 4)
    {
        status = "Freshman";
    }
    else if (diff == 3)
    {
        status = "Sophomore";
    }
    else if (diff == 2)
    {
        status = "Junior";
    }
    else if (diff == 1)
    {
        status = "Senior";
    }

    cout << name << ", you are a " << status << endl;

    return 0;
}