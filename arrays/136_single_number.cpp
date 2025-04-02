
// Given a non-empty array of integers, every element appears twice except for one. Find that single one.

// Time Complexity: O(n)

// Can be done using nested loops, but that would take O(n^2) time. Instead, we can use the XOR operator to solve this problem in O(n) time.

#include <iostream>

using namespace std;

int main()
{

    int n = 7;

    int arr[7] = {1, 2, 3, 4, 3, 2, 1};

    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        ans ^= arr[i]; // XOR operator
    }

    cout << ans << endl;

    return 0;
}