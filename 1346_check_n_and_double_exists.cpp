// Check if N and Its Double Exist

// Time Complexity: O(n^2)

// Brute Force Approach

#include <iostream>

#include <vector>

using namespace std;

bool checkIfExist(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (i != j && arr[i] == 2 * arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    vector<int> arr = {10, 2, 5, 3};

    cout << checkIfExist(arr);

    return 0;
}

// Optimized Approach

// Time Complexity: O(n)

#include <iostream>

#include <vector>

#include <unordered_set>

using namespace std;

bool checkIfExist(vector<int> &arr)
{

    unordered_set<int> s;

    for (int val : arr)
    {

        if (s.find(2 * val) != s.end() || (val % 2 == 0 && s.find(val / 2) != s.end()))
        {
            return true;
        }

        s.insert(val);
    }

    return false;
}

int main()
{

    vector<int> arr = {10, 2, 5, 3};

    cout << checkIfExist(arr);

    return 0;
}