// Given an array of prices, find the maximum profit that can be made by buying and selling a stock at most once.

// Time Complexity: O(n)

#include <iostream>

using namespace std;

int main()
{

    int n = 6;

    int prices[6] = {7, 1, 5, 3, 6, 14};

    int bestBuy = prices[0], maxProfit = 0;

    for (int i = 1; i < n; i++)
    {

        if (bestBuy < prices[i])

            maxProfit = max(maxProfit, prices[i] - bestBuy);

        bestBuy = min(bestBuy, prices[i]);
    }

    cout << maxProfit << endl;

    return 0;
}