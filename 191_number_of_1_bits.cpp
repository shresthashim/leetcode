// Hammering Weight

// Time Complexity: O(1)

#include <iostream>
#include <cstdint>

using namespace std;

int hammingWeight(uint32_t n)
{
    int res = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            res += 1;
        }
    }
    return res;
}

int main()
{
    cout << hammingWeight(00000000000000000000000000001011) << endl;
    cout << hammingWeight(00000000000000000000000010000000) << endl;

    return 0;
}