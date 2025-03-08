#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
    int left = 0, right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string word;

    cout << "Please enter a word : ";
    cin >> word;

    if (isPalindrome(word))
    {
        cout << word << " is a palindrome" << endl;
    }
    else
    {
        cout << word << " is NOT a palindrome" << endl;
    }

    return 0;
}
