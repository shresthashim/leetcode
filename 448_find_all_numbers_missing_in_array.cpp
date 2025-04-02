// Find all the disappeared numbers in an array

// Time complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0)
        {
            nums[index] = -nums[index];
        }
    }

    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            result.push_back(i + 1);
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> result = findDisappearedNumbers(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}