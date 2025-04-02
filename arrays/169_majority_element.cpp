// Brute Force Approach

// Given an array of integers, find the majority element.

// Time Complexity: O(n^2)

#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    int arr[5] = {1, 2, 2, 2, 5};

    int majorityElement = 0;

    for (int i = 0; i < n; i++)
    {

        int freq = 0;

        for (int j = 0; j < n; j++)
        {

            if (arr[i] == arr[j])
            {

                freq++;
            }
        }

        if (freq >= n / 2)
        {

            majorityElement = arr[i];
            break;
        }
    }

    cout << majorityElement << endl;

    return 0;
}

// Moore's Voting Algorithm

// Given an array of integers, find the majority element.

// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    int arr[5] = {1, 2, 2, 2, 5};

    int majorityElement = 0, count = 0;

    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {
            majorityElement = arr[i];
        }

        if (arr[i] == majorityElement)
        {

            count++;
        }
        else
        {

            count--;
        }
    }

    cout << majorityElement << endl;

    return 0;
}