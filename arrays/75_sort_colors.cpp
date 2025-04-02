// DNF Algorithm : Sort an array of 0s, 1s and 2s

// Time Complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{

    int n = nums.size();

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main()
{

    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}