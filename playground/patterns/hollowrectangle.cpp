#include <iostream>

using namespace std;

int main()
{
    int rows = 0;
    int cols = 0;
    cout << "Rows: ";
    cin >> rows;
    cout << "Cols: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
            if (i != 1 && i != rows)
            {
                for (int k = 1; k <= cols - 2; k++)
                {
                    cout << " ";
                }
                cout << "*";
                break;
            }
        }
        cout << endl;
    }
    return 0;
}