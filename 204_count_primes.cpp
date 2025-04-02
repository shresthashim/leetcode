// Count the number of prime numbers less than a non-negative number, n. Use Seive of Eratosthenes algorithm to solve this problem. The algorithm is as follows:

// Time Complexity: O(n log log n)

#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n)
{

    vector<bool> isPrime(n + 1, true);

    int count = 0;

    for (int i = 2; i < n; i++)
    {

        if (isPrime[i])
        {

            count++;

            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int n = 100;

    cout << countPrimes(n);

    return 0;
}