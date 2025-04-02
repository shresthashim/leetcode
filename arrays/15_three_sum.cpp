// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Time Complexity: 0(nlog(n) + n^2)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> &arr)
{

    vector<vector<int>> ans;

    int n = arr.size();

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int j = i + 1, k = n - 1;

        while (j < k)
        {

            int sum = arr[i] + arr[j] + arr[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                    j++;
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(arr);

    for (const auto &triplet : ans)
    {

        for (int val : triplet)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}