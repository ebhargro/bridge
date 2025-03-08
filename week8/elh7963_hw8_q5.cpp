#include <iostream>
#include <string>
using namespace std;

int main()
{

    string firstName, middleName, lastName;

    cout << "Enter first name, middle name (or initial), and last name: ";
    cin >> firstName >> middleName >> lastName;

    char middleInitial = toupper(middleName[0]);

    cout << lastName << ", " << firstName << " " << middleInitial << "." << endl;

    return 0;
}
