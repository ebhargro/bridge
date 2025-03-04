#include <iostream>
#include <vector>
using namespace std;

void analyzeDivisors(int n, int &outCountDivs, int &outSumDivs)
{
    outCountDivs = 0;
    outSumDivs = 0;

    for (int d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            int other = n / d;

            if (d != n)
            {
                outSumDivs += d;
                outCountDivs += 1;
            }

            if (other != d && other != n)
            {
                outSumDivs += other;
                outCountDivs += 1;
            }
        }
    }
}

int isPerfect(int n)
{
    int countDivs, sumDivs;
    analyzeDivisors(n, countDivs, sumDivs);
    return (sumDivs == n) ? 1 : 0;
}

int isAmicable(int n1, int n2)
{
    int c1, s1, c2, s2;
    analyzeDivisors(n1, c1, s1);
    analyzeDivisors(n2, c2, s2);
    if (s1 == n2 && s2 == n1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int M;
    cout << "Enter an integer: ";
    cin >> M;
    if (M < 2)
    {
        cout << "Integer must be >= 2.\n";
        return 0;
    }

    vector<int> sumDivs(M + 1, 0);
    vector<int> countDivs(M + 1, 0);

    for (int i = 2; i <= M; i++)
    {
        analyzeDivisors(i, countDivs[i], sumDivs[i]);
    }

    cout << "\n Amicable pairs: ";
    bool foundAmicable = false;
    for (int i = 2; i <= M; i++)
    {
        int j = sumDivs[i];
        if (j > i && j <= M)
        {
            if (sumDivs[j] == i)
            {
                cout << "(" << i << ", " << j << ")\n";
                foundAmicable = true;
            }
        }
    }
    if (!foundAmicable)
    {
        cout << "Sorry, no amicable pairs \n";
    }

    cout << "\nPerfect numbers: ";
    bool foundPerfect = false;
    for (int i = 2; i <= M; i++)
    {
        if (sumDivs[i] == i)
        {
            cout << i << " , ";
            foundPerfect = true;
        }
    }
    if (!foundPerfect)
    {
        cout << "Sorry, no perfect numbers found";
    }
    cout << endl;

    return 0;
}
