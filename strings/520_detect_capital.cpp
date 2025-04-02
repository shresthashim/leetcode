// Detect Capital

// Time Complexity: O(n)

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool detectCapitalUse(string word)
{
    int n = word.length();

    if (all_of(word.begin(), word.end(), ::isupper))
    {
        return true;
    }

    if (all_of(word.begin(), word.end(), ::islower))
    {
        return true;
    }

    if (isupper(word[0]) && all_of(word.begin() + 1, word.end(), ::islower))
    {
        return true;
    }

    return false;
}

int main()
{
    string str = "USA";

    cout << detectCapitalUse(str);

    return 0;
}
