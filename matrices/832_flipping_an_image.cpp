// Flip image

// Time complexity: O(m*n)

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int n = image.size();
    for (auto &row : image)
    {
        int left = 0, right = n - 1;
        while (left <= right)
        {

            int temp = row[left] ^ 1;
            row[left] = row[right] ^ 1;
            row[right] = temp;
            left++;
            right--;
        }
    }
    return image;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> result = flipAndInvertImage(image);
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