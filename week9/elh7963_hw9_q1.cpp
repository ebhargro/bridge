#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Please enter a line of text:" << endl;
    string line;
    getline(cin, line);

    int wordCount = 0;
    bool inWord = false;
    int letterFrequency[26] = {0};

    for (int i = 0; i < (int)line.size(); i++)
    {
        char c = line[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {

            char lower;
            if (c >= 'A' && c <= 'Z')
            {
                lower = c - 'A' + 'a';
            }
            else
            {
                lower = c;
            }

            letterFrequency[lower - 'a']++;

            if (!inWord)
            {
                inWord = true;
                wordCount++;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << wordCount << " words" << endl;

    for (int i = 0; i < 26; i++)
    {
        if (letterFrequency[i] > 0)
        {
            cout << char('a' + i) << "\t" << letterFrequency[i] << endl;
        }
    }

    return 0;
}
