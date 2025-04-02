// Given 2 strings 's' and 't'. 't' is randomly shuffled by 's' with an extra letter at random position. Find it.

// Time Complexity : O(n)

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char findTheDifference(string s, string t)
{

    int m = s.length();
    int n = t.length();

    sort(s.begin(), s.end());

    sort(t.begin(), t.end());

    for (int i = 0; i < n; i++)
    {

        if (s[i] != t[i])
            return t[i];
    }
    return -1;
}

int main()
{

    string s = "abcd";

    string t = "abedc";

    cout << findTheDifference(s, t);
    return 0;
}