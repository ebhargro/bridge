#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day, startTime;
    double rate;
    int callDuration;
    cout << "Enter day of the week as a 2-character string (Mo, Tu, We, etc.): ";
    cin >> day;
    cout << "Enter the start time in 24-hour notation: ";
    cin >> startTime;
    cout << "Enter duration of the call in number of minutes: ";
    cin >> callDuration;

    int hour = (startTime[0] - '0') * 10 + (startTime[1] - '0');
    int minute = (startTime[3] - '0') * 10 + (startTime[4] - '0');

    if (day == "Sa" || day == "Su")
    {

        rate = 0.15;
    }
    else
    {

        if (hour >= 8 && hour < 18)
        {
            rate = 0.40;
        }
        else
        {
            rate = 0.25;
        }
    }

    double cost = callDuration * rate;
    cout << "The cost of the call is: $" << cost << endl;

    return 0;
}