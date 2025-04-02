// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// Optimized Approach Using Hash Map

// Time Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{

    int n = arr.size();

    unordered_map<int, int> m;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {

        int first = arr[i];

        int second = target - first;

        if (m.find(second) != m.end())
        {

            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }

        m[first] = i;
    }
    return ans;
}

int main()
{

    vector<int> arr = {{1, 2, 3, 5}};
    int target = 8;
    vector<int> ans = twoSum(arr, target);

    for (int val : ans)
    {
        cout << val << endl;
    }
    return 0;
}

// Brute Force Approach

// Time Complexity: O(n^2)

// #include <iostream>

// using namespace std;

// int main()
// {

//     int n = 5, target = 7;

//     int arr[5] = {1, 2, 3, 4, -5};

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {

//             if (arr[i] + arr[j] == target)
//             {

//                 cout << i << " " << j << endl;
//             }
//         }
//     }

//     return 0;
// }