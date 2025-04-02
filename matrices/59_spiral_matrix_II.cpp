// Print matrix in spiral order of range 1 to n^2

// Time Complexity : O(n^2)

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> ans(n, vector<int>(n));

    int srow = 0, scol = 0, erow = n - 1, ecol = n - 1;
    int num = 1;

    while (srow <= erow && scol <= ecol)
    {

        for (int j = scol; j <= ecol; j++)
        {
            ans[srow][j] = num++;
        }
        srow++;

        for (int i = srow; i <= erow; i++)
        {
            ans[i][ecol] = num++;
        }
        ecol--;

        if (srow <= erow)
        {
            for (int j = ecol; j >= scol; j--)
            {
                ans[erow][j] = num++;
            }
            erow--;
        }

        if (scol <= ecol)
        {
            for (int i = erow; i >= srow; i--)
            {
                ans[i][scol] = num++;
            }
            scol++;
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> ans = generateMatrix(3);

    for (const auto &values : ans)
    {

        for (int val : values)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}