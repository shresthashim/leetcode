// Given a sorted array, we have to find the position of the target element in the array. If the target element is not present in the array, we have to return the position where the target element should be inserted to maintain the sorted order of the array.

// Time Complexity: O(log n)

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int st = 0, end = nums.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            st = mid + 1;
        else
            end = mid - 1;
    }

    return st;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << searchInsert(nums, target);

    return 0;
}