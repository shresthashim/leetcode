// /Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Time Complexity : O(n^2)
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int> &nums, int k) // Brute Approach
{
    int count = 0, n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += nums[j];
            if (currentSum == k)
            {
                count++;
            }
        }
    }

    return count;
}

// Time Complexity: O(n)

int subarraySum1(vector<int> &nums, int k) // Optimal Solution
{

    int n = nums.size();

    int count = 0;

    vector<int> prefixSum(n, 0);

    prefixSum[0] = nums[0];

    for (int i = 0; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    unordered_map<int, int> m;

    for (int j = 0; j < n; j++)
    {
        if (prefixSum[j] == k)
            count++;

        int val = prefixSum[j] - k;

        if (m.find(val) != m.end())
        {
            count += m[val];
        }

        if (m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}

int main()
{

    vector<int> arr = {1, 1, 1};
    int k = 2;

    cout << subarraySum(arr, k);
    cout << subarraySum1(arr, k);
    return 0;
}