// Create transposed matrix of given matrix

// Time complexity: O(m*n)

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> result(n, vector<int>(m));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> result = transpose(matrix);
    for (const vector<int> &row : result)
    {
        for (int cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }
    return 0;
}