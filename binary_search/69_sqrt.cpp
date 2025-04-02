// Square Root of x using binary search. y^2 = x   (find y)

// Time Complexity : O(logn)

#include <iostream>
using namespace std;

int sqrt(int x)
{
    if (x == 0)
        return 0;

    int st = 1, end = x, ans = 0;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (mid == x / mid)
        {
            return mid;
        }

        if (mid < x / mid)
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int x = 25;
    cout << sqrt(x) << endl;
    x = 26;
    cout << sqrt(x) << endl;

    x = 0;
    cout << sqrt(x) << endl;

    return 0;
}
