// Given a string and spaces integer array, return a string with spaces inserted at the specified indices.

// Time Complexity: O(n + m)

#include <iostream>
#include <vector>
#include <string>

using namespace std;
string addSpaces(string s, vector<int> &spaces)
{
    string ans;
    int i = 0, j = 0;
    int n = s.size(), m = spaces.size();
    while (j < m)
    {
        if (i == spaces[j])
            ans += ' ', j++;
        ans += s[i++];
    }
    while (i < n)
        ans += s[i++];
    return ans;
}

int main()
{

    string s = "leetcode";
    vector<int> spaces = {1, 3, 5};

    cout << addSpaces(s, spaces);

    return 0;
}