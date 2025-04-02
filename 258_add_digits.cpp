// Given a number represented as an integer, return the sum of its digits until the sum is only one digit.

// Time Complexity : O(log n)

#include <iostream>

using namespace std;

int addDigits(int n)
{
    while (n >= 10)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main()
{
    int n = 38;
    cout << addDigits(n) << endl;
    return 0;
}
