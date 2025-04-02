// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

// Time complexity: O(n!)

#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
            return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}

void nQueens(vector<string> &board, int row, int n,
             vector<vector<string>> &ans)
{

    if (row == n)
    {
        ans.push_back({board});
        return;
    }

    for (int j = 0; j < n; j++)
    {

        if (isSafe(board, row, j, n))
        {
            board[row][j] = 'Q';
            nQueens(board, row + 1, n, ans);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{

    vector<string> board(n, string(n, '.'));

    vector<vector<string>> ans;

    nQueens(board, 0, n, ans);

    return ans;
}

int main()
{
    int n = 4;

    vector<vector<string>> ans = solveNQueens(n);

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << endl;
        }
        cout << endl;
    }

    return 0;
}