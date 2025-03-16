#include <iostream>
#include <string>
using namespace std;

bool isLetter(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    return c;
}

bool areAnagrams(const string &s1, const string &s2)
{
    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < (int)s1.size(); i++)
    {
        char c = s1[i];
        if (isLetter(c))
        {
            c = toLower(c);
            freq1[c - 'a']++;
        }
    }

    for (int i = 0; i < (int)s2.size(); i++)
    {
        char c = s2[i];
        if (isLetter(c))
        {
            c = toLower(c);
            freq2[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1, str2;
    cout << "Enter first word: ";
    getline(cin, str1);
    cout << "Enter second word: ";
    getline(cin, str2);

    if (areAnagrams(str1, str2))
        cout << "The two words are anagrams." << endl;
    else
        cout << "The two words are NOT anagrams." << endl;

    return 0;
}
