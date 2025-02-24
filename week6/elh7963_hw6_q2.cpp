#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol)
{
    for (int i = 1; i <= n; i++)
    {

        int numSpaces = m - (i - 1);
        for (int s = 0; s < numSpaces; s++)
        {
            cout << ' ';
        }
        int numSymbols = 2 * i - 1;
        for (int s = 0; s < numSymbols; s++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}

void printPineTree(int n, char symbol)
{
    for (int k = 1; k <= n; k++)
    {
        printShiftedTriangle(k + 1, k, symbol);
    }
}

int main()
{
    int numTriangles;
    char ch;

    cout << "How many triangles for the pine tree? ";
    cin >> numTriangles;

    cout << "What character to use for the pine tree? ";
    cin >> ch;

    printPineTree(numTriangles, ch);

    return 0;
}
