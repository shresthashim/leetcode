// Find the power of a number using binary exponentiation

// Time Complexity: O(log(n))


#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    double x = 2.0;

    long binaryForm = n;

    if (n < 0)
    {

        x = 1 / x;

        binaryForm = -binaryForm;
    }

    double ans = 1;

    while (binaryForm > 0)
    {

        if (binaryForm % 2 == 1)
        {

            ans *= x;
        }

        x *= x;

        binaryForm /= 2;
    }

    cout << ans << endl;

    return 0;
}
