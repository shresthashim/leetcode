// Snake in Matrix

// Time Complexity: O(n)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int finalPositionOfSnake(int n, vector<string> &commands)
{

    int row = 0, col = 0;

    for (const string &command : commands)
    {
        if (command == "UP")
        {
            row--;
        }
        else if (command == "DOWN")
        {
            row++;
        }
        else if (command == "LEFT")
        {
            col--;
        }
        else if (command == "RIGHT")
        {
            col++;
        }
    }

    return row * n + col;
}

int main()
{
    vector<string> commands = {"RIGHT", "DOWN", "LEFT", "LEFT", "DOWN"};
    cout << finalPositionOfSnake(3, commands) << endl;
    return 0;
}