// Ugly Number : The number whose only prime factors are 2, 3 or 5 is called Ugly Number. For example 6, 8 are ugly while 14 is not ugly since it has other prime factors. Write a program to check whether a given number is ugly or not.

// Time Complexity : O(log n)

#include <iostream>

using namespace std;

bool isUgly(int n)
{
    if (n <= 0)
        return false;

    while (n % 2 == 0)
        n /= 2;
    while (n % 3 == 0)
        n /= 3;
    while (n % 5 == 0)
        n /= 5;

    return n == 1;
}

int main()
{
    int n = 14;
    cout << isUgly(n) << endl;
    return 0;
}