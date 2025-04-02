// Return true if the array contains any duplicates. Otherwise, return false.

// Time Complexity: O(n)

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n = 7;

    int nums[7] = {1, 2, 3, 4, 5, 6, 6};

    sort(begin(nums), end(nums));

    for (int i = 1; i < n; i++)
    {

        if (nums[i] == nums[i - 1])
        {

            cout << "true" << endl;
            return 0;
        }
    }

    return 0;
}