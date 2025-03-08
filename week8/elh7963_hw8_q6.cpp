#include <iostream>
#include <string>

using namespace std;

bool myIsDigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool isAllDigits(const string &s)
{
    if (s.empty())
    {
        return false;
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (!myIsDigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

void replaceAllWithX(string &s)
{
    for (int i = 0; i < (int)s.size(); i++)
    {
        s[i] = 'x';
    }
}

int main()
{
    cout << "Please enter a line of text:\n";
    string line;
    getline(cin, line);

    int n = (int)line.size();
    int i = 0;
    bool firstToken = true;

    while (i < n)
    {

        while (i < n && line[i] == ' ')
        {
            i++;
        }
        if (i >= n)
        {
            break;
        }

        int start = i;

        while (i < n && line[i] != ' ')
        {
            i++;
        }

        string token = line.substr(start, i - start);

        if (isAllDigits(token))
        {
            replaceAllWithX(token);
        }

        if (!firstToken)
        {
            cout << " ";
        }
        cout << token;
        firstToken = false;
    }

    cout << endl;
    return 0;
}
