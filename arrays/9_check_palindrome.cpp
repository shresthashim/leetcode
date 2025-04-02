// Check Palindrome

// Time Complexity: O(log(n))

#include <iostream>

using namespace std;

int main()
{

    int x;

    cout << "Enter a number: ";

    cin >> x;

    long result = 0;

    int temp = x;

    while (temp > 0)
    {

        int rem = temp % 10;
        result = result * 10 + rem;

        temp /= 10;
    }

    if (result == x)
    {

        cout << "Palindrome" << endl;
    }
    else
    {

        cout << "Not Palindrome" << endl;
    }
}