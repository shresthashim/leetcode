// Binary Search using recursion

// Time Complexity : O(logn)

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target, int st, int end)
{
    if (st > end)
    {
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] < target)
    {
        return search(nums, target, mid + 1, end);
    }
    else
    {
        return search(nums, target, st, mid - 1);
    }
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int result = search(nums, target, 0, nums.size() - 1);
    cout << "Index of target: " << result << endl;

    return 0;
}
