// Next Greater Element I
// Given two arrays nums1 and nums2, return an array answer such that answer[i] is the index of the first greater element to the right of nums1[i] in nums2.
// If there is no such element, output -1 for this index.

// Time Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m;

    stack<int> s;

    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        while (s.size() > 0 && s.top() >= nums2[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            m[nums2[i]] = -1;
        }
        else
        {
            m[nums2[i]] = s.top();
        }
        s.push(nums2[i]);
    }
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {

        ans.push_back(m[nums1[i]]);
    }
    return ans;
}

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = nextGreaterElement(nums1, nums2);

    cout << "Next greater elements: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}