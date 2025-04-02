// Check if only alphanumeric characters are present in the string and check if the string is a palindrome

// Time Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

bool isAlphanumeric(char c)
{
    return (tolower(c) >= 'a' && tolower(c) <= 'z') || (c >= '0' && c <= '9');
}

bool isPalindrome(string s)
{
    int n = s.size();

    int st = 0, end = n - 1;

    while (st < end)
    {
        if (!isalnum(s[st]))
        {
            st++;
            continue;
        }

        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end]))
            return false;

        st++;
        end--;
    }

    return true;
}

int main()
{

    string str = "A man, a plan, a canal: Panama";

    cout << isPalindrome(str);

    return 0;
}