// Reverse a string

// Time Complexity: O(n)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reverseString(vector<char> &s)
{
    int n = s.size();

    int st = 0, end = n - 1;

    while (st < end)
    {
        swap(s[st++], s[end--]);
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s);

    for (char val : s)
    {
        cout << val << " ";
    }

    return 0;
}