// Given an array of integers, find the product of all elements except itself return the array of products.

// Time Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 4;

    int nums[4] = {1, 2, 4, 4};

    vector<int> result(n, 1);

    for (int i = 1; i < n; i++)
    {

        result[i] = result[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {

        suffix *= nums[i + 1];
        result[i] *= suffix;
    }

    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}
