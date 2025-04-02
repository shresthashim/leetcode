// Search in 2d matrix using binary search 2 times

// Time Complexity: O(log(m) + log(n))

#include <iostream>
#include <vector>

using namespace std;

bool searchTargetInRow(vector<vector<int>> &matrix, int target, int row)
{

    int n = matrix[0].size();

    int st = 0, end = n - 1;
    while (st <= end)
    {

        int mid = st + (end - st) / 2;

        if (target == matrix[row][mid])
            return true;

        if (target >= matrix[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int m = matrix.size(), n = matrix[0].size();

    int stRow = 0, endRow = m - 1;

    while (stRow <= endRow)
    {

        int midRow = stRow + (endRow - stRow) / 2;

        if (target >= matrix[midRow][0] &&
            target <= matrix[midRow][n - 1])
        {
            return searchTargetInRow(matrix, target, midRow);
        }
        else if (target >= matrix[midRow][n - 1])
        {
            stRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int target = 9;

    cout << searchMatrix(matrix, target);

    return 0;
}