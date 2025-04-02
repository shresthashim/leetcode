// Reverse a integer number. Also check bounds for overflow.

// Time Complexity: O(log n)

#include <iostream>
#include <climits>

using namespace std;

int reverse(int x)
{

    int rev = 0;

    while (x != 0)
    {

        int rem = x % 10;

        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;

        rev = (rev * 10) + rem;
        x = x / 10;
    }
    return rev;
}

int main()
{
    int x = 123;

    cout << reverse(x);

    return 0;
}