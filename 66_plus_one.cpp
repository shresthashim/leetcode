// Add one to the array of integers. The array represents a number.

// Time Complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{

    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {

        if (digits[i] < 9)
        {

            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);

    return digits;
}

int main()
{

    vector<int> digits = {1, 2, 3, 9};

    vector<int> result = plusOne(digits);

    for (int val : result)
    {
        cout << val;
    }

    return 0;
}