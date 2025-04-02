// Remove All Adjacent Duplicates In String

// Time Complexity: O(n)

#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(string s)
{
    string result;

    for (char ch : s)
    {
        if (!result.empty() && result.back() == ch)
        {
            result.pop_back();
        }
        else
        {
            result.push_back(ch);
        }
    }

    return result;
}

int main()
{

    string s = "abbaca";

    cout << removeDuplicates(s);

    return 0;
}
