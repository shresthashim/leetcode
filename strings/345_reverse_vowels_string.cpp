// Reverse Vowels of a String

// Time Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch)
{
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string reverseVowels(string s)
{
    int st = 0, end = s.length() - 1;

    while (st < end)
    {

        if (!isVowel(s[st]))
        {
            st++;
            continue;
        }

        if (!isVowel(s[end]))
        {
            end--;
            continue;
        }

        swap(s[st++], s[end--]);
    }
    return s;
}

int main()
{
    string str = "hello";

    cout << reverseVowels(str);

    return 0;
}