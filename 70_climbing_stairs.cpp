// Climbing Stairs Problem - Similar to Fibonacci Series

// Time Complexity : O(n)

#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n <= 2)
        return n;

    int prev2 = 1;
    int prev1 = 2;
    int current = 0;

    for (int i = 3; i <= n; ++i)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main()
{
    int n = 5;
    cout << climbStairs(n) << endl;
    return 0;
}
