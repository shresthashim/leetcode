// Given an 2d array, find missing and repeated values.

// Time Complexity : O(n^2)

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{

    int n = grid.size(), a;

    vector<int> ans;

    unordered_set<int> s;

    int actualSum = 0, expSum = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            actualSum += grid[i][j];

            if (s.find(grid[i][j]) != s.end())
            {

                a = grid[i][j];
                ans.push_back(a);
            }

            s.insert(grid[i][j]);
        }
    }

    expSum = ((n * n) * (n * n + 1)) / 2;

    int b = expSum + a - actualSum;

    ans.push_back(b);

    return ans;
}

int main()
{

    vector<vector<int>> grid = {{1, 3}, {3, 4}};

    vector<int> ans = findMissingAndRepeatedValues(grid);

    for (int val : ans)
    {
        cout << val << endl;
    }
    return 0;
}