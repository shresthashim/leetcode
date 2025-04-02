// Remove Element from an array and return the length of the array after removing the element.

// Time Complexity: O(n)

#include <iostream>

using namespace std;

int main()
{

    int n = 5, k = 0, val = 3;

    int arr[5] = {1, 3, 3, 4, 3};

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val)
        {

            arr[k] = arr[i];
            k++;
        }
    }

    cout << k << endl;

    return 0;
}