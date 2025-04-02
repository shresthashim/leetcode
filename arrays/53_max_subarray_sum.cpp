// Brute Force Approach

// Given an array of integers, find the maximum subarray sum.

// Time Complexity: O(n^2)

#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    int arr[5] = {1, 2, 3, 4, -5};

    int maxSum = 0;

    for (int start = 0; start < n; start++)
    {

        int currSum = 0;

        for (int end = start; end < n; end++)
        {

            currSum += arr[end];

            maxSum = max(maxSum, currSum);
        }
    }

    cout << maxSum << endl;

    return 0;
}

// Kadane's Algorithm

// Given an array of integers, find the maximum subarray sum.

// Time Complexity: O(n)

#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    int arr[5] = {1, 2, 3, 4, -5};

    int maxSum = 0;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {

        currSum += arr[i];

        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << maxSum << endl;

    return 0;
}