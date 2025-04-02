// Check Knight Tour Configuration

// Time Complexity: O(8^(n^2))

#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<vector<int>> &grid, int r, int c, int n, int expVal)
{

    if (r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expVal)
    {
        return false;
    }

    if (expVal == n * n - 1)
    {
        return true;
    }
    int ans1 = isValid(grid, r - 2, c + 1, n, expVal + 1);
    int ans2 = isValid(grid, r - 1, c + 2, n, expVal + 1);
    int ans3 = isValid(grid, r + 1, c + 2, n, expVal + 1);
    int ans4 = isValid(grid, r + 2, c + 1, n, expVal + 1);
    int ans5 = isValid(grid, r + 2, c - 1, n, expVal + 1);
    int ans6 = isValid(grid, r + 1, c - 2, n, expVal + 1);
    int ans7 = isValid(grid, r - 1, c - 2, n, expVal + 1);
    int ans8 = isValid(grid, r - 2, c - 1, n, expVal + 1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

bool checkValidGrid(vector<vector<int>> &grid)
{
    return isValid(grid, 0, 0, grid.size(), 0);
}

int main()
{
    vector<vector<int>> grid = {
        {0, 59, 38, 33, 30, 17, 8, 63},
        {37, 34, 31, 60, 9, 62, 29, 16},
        {58, 1, 36, 39, 32, 27, 18, 7},
        {35, 48, 41, 26, 61, 10, 15, 28},
        {42, 57, 2, 49, 40, 23, 6, 19},
        {47, 50, 45, 54, 25, 20, 11, 14},
        {56, 43, 52, 3, 22, 13, 24, 5},
        {51, 46, 55, 44, 53, 4, 21, 12}};

    cout << checkValidGrid(grid) << endl;

    return 0;
}