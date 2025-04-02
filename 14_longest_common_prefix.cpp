// Longest Common Prefix

// Time complexity: O(n * m), where n is the number of strings and m is the length of the shortest string

#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); ++i)
    {

        while (strs[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty())
                return "";
        }
    }

    return prefix;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(strs);

    return 0;
}