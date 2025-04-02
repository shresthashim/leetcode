// Remove All Occurrences of a Substring

// Time Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

string removeOccurrences(string s, string part)
{

    while (s.find(part) < s.length())
    {

        s.erase(s.find(part), part.length());
    }

    return s;
}

int main()
{

    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurrences(s, part);

    return 0;
}