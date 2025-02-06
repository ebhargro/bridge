#include <iostream>

using namespace std;

int main()
{
    int cols = 0, rows = 0;
    cout << "Enter a number of rows";
    cin >> rows;
    cout << "Enter a number of columns";
    cin >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}