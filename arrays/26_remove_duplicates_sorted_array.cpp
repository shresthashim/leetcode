// Remove Duplicates from an array and return the length of the array after removing the duplicates.

// Time Complexity: O(n)

#include <iostream>

using namespace std;

int main()
{

    int n = 5, k = 1;

    int arr[5] = {1, 2, 2, 3, 4};

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {

            arr[k] = arr[i];
            k++;
        }
    }

    cout << k << endl;

    return 0;
}