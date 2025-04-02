// Find the next permutation of the given array

// Time Complexity: O(n)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int> &A)
{

    int pivot = -1, n = A.size();

    for (int i = n - 2; i >= 0; i--)
    {

        if (A[i] < A[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(A.begin(), A.end());
        return;
    }

    for (int i = n - 1; i > pivot; i--)
    {
        if (A[i] > A[pivot])
        {

            swap(A[i], A[pivot]);
            break;
        }
    }

    int i = pivot + 1, j = n - 1;

    while (i <= j)
    {
        swap(A[i++], A[j--]);
    }
}

int main()
{

    vector<int> A = {1, 2, 3};

    nextPermutation(A);

    for (int val : A)
    {
        cout << val << " ";
    }

    return 0;
}