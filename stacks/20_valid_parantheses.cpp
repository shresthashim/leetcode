// Valid Parentheses

// Time Complexity: O(n)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty()) // Check if stack is empty (no matching opening bracket)
                return false;

            if ((st.top() == '(' && s[i] == ')') ||
                (st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty(); // Return true if stack is empty, meaning all brackets are matched
}

int main()
{
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    if (isValid(input))
    {
        cout << "The string is valid." << endl;
    }
    else
    {
        cout << "The string is invalid." << endl;
    }

    return 0;
}
