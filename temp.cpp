#include <iostream>

using namespace std;

int main()
{

    float tempF;
    float tempC;
    cout << "Provide the current temp in Fahrenheit: ";
    cin >> tempF;
    tempC = (tempF - 32) * 5 / 9;
    cout << "The current temp in Celcius is " << tempC << ".";
}