// Given an integer array nums of unique elements, return all possible
// subsets  (the power set).

// Time Complexity: O(n * 2^n)

#include <iostream>
#include <vector>

using namespace std;

void getAllSubsets(vector<int> &nums, vector<int> &ans, int i,
                   vector<vector<int>> &allSubsets)
{

    if (i == nums.size())
    {
        allSubsets.push_back({ans});
        ;
        return;
    }

    ans.push_back(nums[i]);

    getAllSubsets(nums, ans, i + 1, allSubsets);

    ans.pop_back();

    getAllSubsets(nums, ans, i + 1, allSubsets);
}

vector<vector<int>> subsets(vector<int> &nums)
{

    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);

    return allSubsets;
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};
    vector<vector<int>> result = subsets(nums);

    cout << "Subsets:" << endl;
    for (const auto &subset : result)
    {
        cout << "{ ";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}