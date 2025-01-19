#include <iostream>
using namespace std;

int main()
{
    const double POUNDS_TO_KG = 0.453592;
    const double INCHES_TO_METERS = 0.0254;

    double weightPounds, heightInches;
    cout << "Please enter weight (in pounds): ";
    cin >> weightPounds;
    cout << "Please enter height (in inches): ";
    cin >> heightInches;

    double weightKg = weightPounds * POUNDS_TO_KG;
    double heightMeters = heightInches * INCHES_TO_METERS;

    double bmi = weightKg / (heightMeters * heightMeters);

    string status;
    if (bmi < 18.5)
    {
        status = "Underweight";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        status = "Normal";
    }
    else if (bmi >= 25 && bmi < 30)
    {
        status = "Overweight";
    }
    else
    {
        status = "Obese";
    }

    cout << "The weight status is: " << status << endl;

    return 0;
}