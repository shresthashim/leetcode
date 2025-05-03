// Min Stack

// Time Complexity: O(1) for all operations
// Space Complexity: O(n) for the stack

#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
    stack<pair<int, int>> s;

public:
    MinStack() {}

    void push(int val)
    {
        if (s.empty())
        {
            s.push({val, val});
        }
        else
        {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop() { s.pop(); }

    int top() { return s.top().first; }

    int getMin() { return s.top().second; }
};

int main()
{
    MinStack minStack;
    minStack.push(3);
    minStack.push(5);
    cout << "Top: " << minStack.top() << endl;    // Output: 5
    cout << "Min: " << minStack.getMin() << endl; // Output: 3
    minStack.pop();
    cout << "Top: " << minStack.top() << endl;    // Output: 3
    cout << "Min: " << minStack.getMin() << endl; // Output: 3
    return 0;
}
