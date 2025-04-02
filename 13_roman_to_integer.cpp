// Roman To Integer

// Time Complexity: O(n)

#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s)
{
    int res = 0;
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (roman[s[i]] < roman[s[i + 1]])
        {
            res -= roman[s[i]];
        }
        else
        {
            res += roman[s[i]];
        }
    }

    return res + roman[s[s.size() - 1]];
}

int main()
{
    cout << romanToInt("III") << endl;
    cout << romanToInt("IV") << endl;
    cout << romanToInt("IX") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}