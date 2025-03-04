#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int printMonthCalendar(int numOfDays, int startingDay)
{
    cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << endl;
    for (int i = 1; i < startingDay; i++)
    {
        cout << "\t";
    }

    int dayOfWeek = startingDay;
    for (int day = 1; day <= numOfDays; day++)
    {
        cout << day << "\t";
        if (dayOfWeek == 7)
        {
            cout << endl;
            dayOfWeek = 0;
        }
        dayOfWeek++;
    }

    if (dayOfWeek != 1)
    {
        cout << endl;
    }
    int lastDay = dayOfWeek - 1;
    if (lastDay == 0)
    {
        lastDay = 7;
    }

    return lastDay;
}

void printYearCalendar(int year, int startingDay)
{
    string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
    {
        daysInMonth[1] = 29;
    }

    int currentDay = startingDay;
    for (int i = 0; i < 12; i++)
    {
        cout << "\t" << months[i] << " " << year << endl;
        int lastDay = printMonthCalendar(daysInMonth[i], currentDay);

        currentDay = (lastDay % 7) + 1;

        cout << endl;
    }
}

int getFirstDayOfYear(int year)
{
    int totalDays = 0;
    for (int y = 1900; y < year; y++)
    {
        if (isLeapYear(y))
        {
            totalDays += 366;
        }
        else
        {
            totalDays += 365;
        }
    }
    int day = (totalDays % 7) + 1;
    return day;
}

int main()
{
    int year;
    cout << "Enter a year (>= 1900): ";
    cin >> year;

    int firstDay = getFirstDayOfYear(year);

    printYearCalendar(year, firstDay);

    return 0;
}
