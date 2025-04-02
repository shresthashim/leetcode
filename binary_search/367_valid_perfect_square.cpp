// Valid Perfect Square

// Time Complexity : O(logn)

#include <iostream>
using namespace std;

bool isPerfectSquare(int num)
{
    if (num < 2)
        return true;

    int st = 1, end = num;

    while (st <= end)
    {
        long mid = st + (end - st) / 2;

        long square = mid * mid;
        if (square == num)
        {
            return true;
        }

        if (square < num)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    int num = 16;
    cout << isPerfectSquare(num) << endl;
    num = 14;
    cout << isPerfectSquare(num) << endl;
    return 0;
}