// Valid Parentheses

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// Time Complexity: O(n)

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            if (c == ')' && st.top() != '(')
            {
                return false;
            }
            if (c == '}' && st.top() != '{')
            {
                return false;
            }
            if (c == ']' && st.top() != '[')
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    cout << isValid("()") << endl;
    cout << isValid("()[]{}") << endl;
    cout << isValid("(]") << endl;
    cout << isValid("([)]") << endl;
    cout << isValid("{[]}") << endl;
    return 0;
}