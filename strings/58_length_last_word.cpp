// Find length of last word in a string

// Time Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s)
{
    int len = 0;
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ')
        i--;

    while (i >= 0 && s[i] != ' ')
    {
        len++;
        i--;
    }

    return len;
}

int main()
{
    string str = "hello world ";

    cout << lengthOfLastWord(str);

    return 0;
}