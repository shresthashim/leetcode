// Move all zeroes to the end of the array

// Time complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;
void moveZeroes(vector<int> &nums)
{
    int nonZeroIndex = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }

    for (int i = nonZeroIndex; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}